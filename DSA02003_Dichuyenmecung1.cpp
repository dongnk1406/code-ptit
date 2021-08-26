//DI CHUYỂN TRONG MÊ CUNG 1
#include<bits/stdc++.h>
using namespace std;
int n,a[20][20],i,j,k;		// bien k de luu tru phan tu cua xau s
char s[20];
bool check=1;
void in(int k)
{
	for(int i=0;i<k;i++)
		cout<<s[i];
	cout<<" ";
}

void dequy(int i,int j,int k)
{
	if(i==n && j==n)
	{

		in(k);
		check=0;
		return;             // dung khi tim duoc diem cuoi, return la thoat luon
	}

	if(i+1<=n && a[i+1][j]==1)			// neu xuong duoi van di duoc thi di xuong duoi
	{
		s[k]='D';
		dequy(i+1,j,k+1);
	}
	if(j+1<=n && a[i][j+1]==1)			// neu xuong sang phai van di duoc thi di sang phai
	{
		s[k]='R';
		dequy(i,j+1,k+1);
	}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for( i=1;i<=n;i++)
			for( j=1;j<=n;j++)
				cin>>a[i][j];

		check=1;
		// bat dau tu vi tri a[1][1]
		if(a[1][1]!=1)	cout<<"-1";
		else
		{
			dequy(1,1,0);
			if(check)	cout<<"-1";
		}
		cout<<endl;

	}
}

