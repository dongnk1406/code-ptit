// PHÂN TÍCH SỐ 1
#include<bits/stdc++.h>
using namespace std;
int test=true,n,k,x[100];// k: do dai day phan tich hien tai, x[] la day phan tich hien tai


void in()
{
	cout<<"(";
    for (int i=1; i<k; i++)
       		cout << x[i] << " ";
    cout<<x[k] <<") ";
}

void next_division ()
{
	int i=k,j,R,S,D;
	while (i>0 && x[i]==1) // duyet tu cuoi xau, tim phan tu dau tien >1
        i--;
	if(i == 0)
        test=false;
	else
	{
		x[i]=x[i]-1;			// giam x[i] di 1;
		D=k-i+1;				// D la phan con thieu cua day tinh can dien vao
		R=D/x[i];				// R la so gtri so x[i] can viet vao
		S=D%x[i];				// s la so du can viet not vao khi da viet R s X[i]
		k=i;					// luu lai vi tri thu i, de viet them cac so R,x[i]
		if(R>0)
		{
			for(j=i+1;j<=i+R;j++)
				x[j]=x[i];
			k+=R;
		}
		if(S>0)
		{
			k++;
			x[k]=S;
		}
	}
}
int main ()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n;
		k=1;
		x[1]=n;				// gan phan tu dau tien =n;
		while(test)
		{
			in();
			next_division();
		}
		test=true;
		cout<<endl;
	}
}
