#include "stm32f10x.h"
#include "stdio.h"
#include <math.h>

#define SYSCLK_MHZ 72
#define L1 		GPIO_Pin_6
#define L2 		GPIO_Pin_7
#define L3 		GPIO_Pin_8
#define L4 		GPIO_Pin_9

void Delay_init(void)
{
    SystemCoreClockUpdate();
    SysTick_Config(SystemCoreClock/1000000);//  1us
}

volatile uint32_t count_t = 0;
void SysTick_Handler(void)
{
    count_t--;
} 
void delay_us(uint32_t us)
{
    count_t = us;
    while(count_t != 0);
}

void delay_ms(uint32_t ms)
{
    while(ms--)
    {
        delay_us(1000);
    }
}

/*************************** Led 7 Seg ***********************/
//unsigned int LED_7_SEG[20] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
int Led7Seg[15] = {0x81, 0xf3, 0x49, 0x61, 0x33, 0x25, 0x05, 0xf1, 0x01, 0x21};
void ViewLed7(int x)
{
	int i, j;
	for(i = 0 ; i < 100 ; i++)
	{
		if(x >= 1000)
		{
			GPIO_SetBits(GPIOB,L1);
			GPIOA->ODR = Led7Seg[x/1000];
			delay_ms(2);
			GPIO_ResetBits(GPIOB,L1);
			
			GPIO_SetBits(GPIOB,L2);	 
			GPIOA->ODR = Led7Seg[((x/100)%10)];
			delay_ms(2);
			GPIO_ResetBits(GPIOB,L2);
			
			GPIO_SetBits(GPIOB,L3);
			GPIOA->ODR = Led7Seg[(x/10)%10];
			delay_ms(2);
			GPIO_ResetBits(GPIOB,L3);	
			
			GPIO_SetBits(GPIOB,L4);
			GPIOA->ODR = Led7Seg[(x%10)];
			delay_ms(2);
			GPIO_ResetBits(GPIOB,L4);
		}
		else if (x >= 100 && x < 1000)
		{
			GPIO_SetBits(GPIOB,L2);	 
			GPIOA->ODR = Led7Seg[((x/100)%10)];
			delay_ms(2);
			GPIO_ResetBits(GPIOB,L2);
			
			GPIO_SetBits(GPIOB,L3);
			GPIOA->ODR = Led7Seg[(x/10)%10];
			delay_ms(2);
			GPIO_ResetBits(GPIOB,L3);	
			
			GPIO_SetBits(GPIOB,L4);
			GPIOA->ODR = Led7Seg[(x%10)];
			delay_ms(2);
			GPIO_ResetBits(GPIOB,L4);
		}

		else if (x >= 10 && x < 100)
		{
			GPIO_SetBits(GPIOB,L3);
			GPIOA->ODR = Led7Seg[(x/10)%10];
			delay_ms(2);
			GPIO_ResetBits(GPIOB,L3);	
			
			GPIO_SetBits(GPIOB,L4);
			GPIOA->ODR = Led7Seg[(x%10)];
			delay_ms(2);
			GPIO_ResetBits(GPIOB,L4);
		}
		
		else if (x >= 0 && x < 10)
		{
			GPIO_SetBits(GPIOB,L4);
			GPIOA->ODR = Led7Seg[(x%10)];
			delay_ms(2);
			GPIO_ResetBits(GPIOB,L4);
		}
	}
}

void gpio_output1(void)
{
	GPIO_InitTypeDef gpio1;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	gpio1.GPIO_Mode  = GPIO_Mode_Out_PP;
	gpio1.GPIO_Pin   = GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7;
	gpio1.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &gpio1);
}

void gpio_output2(void)
{		
	GPIO_InitTypeDef gpio2;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	gpio2.GPIO_Mode  = GPIO_Mode_Out_PP;
	gpio2.GPIO_Pin   = L1 | L2 | L3 | L4;
	gpio2.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &gpio2);	
}

void Read_Button(void)
{
	GPIO_InitTypeDef gpio3;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	gpio3.GPIO_Mode = GPIO_Mode_IPU;
	gpio3.GPIO_Pin = GPIO_Pin_5;
	GPIO_Init(GPIOB, &gpio3);
}

/*************************** ADC Config ***********************/
void ADC_Configuration(void)
{
	/*cau hinh chan Input cua bo ADC1 la chan PA0*/
	GPIO_InitTypeDef			GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_0;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AIN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	/*cau hinh ADC1*/
	ADC_InitTypeDef 			ADC_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1 , ENABLE);
	ADC_InitStructure.ADC_Mode = ADC_Mode_Independent;
	ADC_InitStructure.ADC_ScanConvMode = DISABLE;
	ADC_InitStructure.ADC_ContinuousConvMode = ENABLE;
	ADC_InitStructure.ADC_ExternalTrigConv = ADC_ExternalTrigConv_None;
	ADC_InitStructure.ADC_DataAlign = ADC_DataAlign_Right;
	ADC_InitStructure.ADC_NbrOfChannel = 1;
	ADC_Init(ADC1, &ADC_InitStructure);

	/* Cau hinh chanel, rank, thoi gian lay mau */
	ADC_RegularChannelConfig(ADC1, ADC_Channel_0, 1, ADC_SampleTime_55Cycles5);
		/* Cho phep bo ADC1 hoat dong */
	ADC_Cmd(ADC1, ENABLE);   
	/* cho phep cam bien nhiet hoat dong */
	ADC_TempSensorVrefintCmd(ENABLE);
	/* Reset thanh ghi cablib  */   
	ADC_ResetCalibration(ADC1);
	/* Cho thanh ghi cablib reset xong */
	while(ADC_GetResetCalibrationStatus(ADC1));
	/* Khoi dong bo ADC */
	ADC_StartCalibration(ADC1);	
	/* Cho trang thai cablib duoc bat */
	while(ADC_GetCalibrationStatus(ADC1));
	/* Bat dau chuyen doi ADC */ 
	ADC_SoftwareStartConvCmd(ADC1, ENABLE);	  
}

/*************************** TIMER Config ***********************/
void time_init(void)
{
	TIM_TimeBaseInitTypeDef TIM_InitStruct;
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);	// dung tim trong APB1
	TIM_InitStruct.TIM_ClockDivision = 0;
	TIM_InitStruct.TIM_CounterMode = TIM_CounterMode_Up;
	TIM_InitStruct.TIM_Prescaler = 36000-1;
	TIM_InitStruct.TIM_Period = 2000-1;		// 2000*36000= 72MHz
	TIM_InitStruct.TIM_RepetitionCounter = 0;
	TIM_TimeBaseInit(TIM2, &TIM_InitStruct);
	TIM_ClearFlag(TIM2,TIM_FLAG_Update);
	TIM_ITConfig(TIM2, TIM_IT_Update, ENABLE);
	TIM_Cmd(TIM2,ENABLE);
		
	// tao ngat (interupt)
	NVIC_InitTypeDef nvic_initsruct;
	nvic_initsruct.NVIC_IRQChannel = TIM2_IRQn;
	nvic_initsruct.NVIC_IRQChannelCmd = ENABLE;
	nvic_initsruct.NVIC_IRQChannelPreemptionPriority = 0;
	NVIC_Init(&nvic_initsruct);
}

volatile uint16_t mode = 0;
void TIM2_IRQHandler(void)
{
	if(TIM_GetFlagStatus(TIM2,TIM_IT_Update) != RESET) {		// check interrupt flag status
		mode ++;
		if(mode > 1)	mode = 0;
		TIM_ClearFlag(TIM2, TIM_FLAG_Update);				// delete timer flag 
	}
}

/****************************** Main ***********************************/
float value_adc1 = 0, sum_adc1 = 0, adc_tb = 0;
float value = 0;
uint32_t count = 0;
int main()
{
	Delay_init();
	gpio_output2();
	gpio_output1();	
	time_init();
	ADC_Configuration();
	Read_Button();
	while(1)
	{
		//sum_adc1 = 0;
		// doc 10 lan gia tri ADC roi lay trung binh ket qua
		for(int b = 0; b < 10; b++) {
			value_adc1 = ADC_GetConversionValue(ADC1);
			sum_adc1 = sum_adc1 + value_adc1;
			delay_ms(1);
		}
		adc_tb = sum_adc1/10;
		value = ADC_GetConversionValue(ADC1);
		float voltage_V =  ((value*12)/4095);
		float voltage_mV = ((value*12)/4095) * 1000;
				
		if(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_5) == 0)
		{
			delay_ms(10);
			if(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_5) == 0)
			{
				while(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_5) == 0);
				count++;
				if(count % 2 != 0)
					ViewLed7(voltage_V);
				else
					ViewLed7(voltage_mV);
			}
		}
	}
}
