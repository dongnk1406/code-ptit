#include<iostream>
using namespace std;
int a[20],n;
void in(int a[],int n)
{
	cout<<"[";
	for(int i=1;i<n;i++)	cout<<a[i]<<" ";
	cout<<a[n]<<"]";
	cout<<" ";
}
void dequy1(int a[],int n)
{
	if(n==0) return;
	int b[n];				// mang luu gia tri khi vao de quy
	for(int i=1;i<n;i++)	b[i]=a[i]+a[i+1];
	dequy1(b,n-1);
	in(a,n);
}
main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)	cin>>a[i];
		dequy1(a,n);	cout<<endl;
	}
}
