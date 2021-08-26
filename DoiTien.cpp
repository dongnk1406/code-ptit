// Dổi tiền với giá trị tờ tiền bất kì
#include<bits/stdc++.h>
using namespace std;
int n,S,a[123],c[123];
int stop=1;
void Sinhtohop(int k) //to hop k cua n phan tu
{
	int i=k; //k la so to tien
	while(i>0 && c[i]==n-k+i)
	{
		i--;
	}
	if(i<=0)
	{
		stop=0;
	}
	else
	{
		c[i]+=1;
		for(int j=i+1;j<=k;j++)
		{
			c[j]=c[j-1]+1;
		}
	}
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       cin>>n>>S;
        for(int i=1;i<=n;i++)
            cin>>a[i]; //Mang a de luu cac gia tri cua cac to tien
        // tinh tong cua cac to hop chap i cua n
        for(int i=1;i<=n;i++)
        {
            stop=1;
            for(int j=1;j<=i;j++)
                c[j]=j; //luu vi tri ban dau cua to tien thu i // Buoc nay giong nhu khoi tao cho ham sinh
            while(stop)
            {
                int sum=0; //Moi truong hop cua cac vi tri sinh khac nhau phai khoi tao sum=0
                for(int j=1;j<=i;j++)
                    sum+=a[c[j]];
                if(sum==S)
                {
                    cout << i;
                    return 0;
                }
                else
                    Sinhtohop(i); //Sinh ra to hop i phan tu la cac vi tri de tiep tuc thu
            }
        }
    }
}
