#include<iostream>
using namespace std;
int a[20],n;
void in(int n)
{
	cout<<"[";
	for(int i=1;i<n;i++)	cout<<a[i]<<" ";
	cout<<a[n]<<"]\n";
}
void dequy1(int n)
{
	if(n==0)
        return;
	in(n);
	for(int i=1;i<n;i++)
        a[i]=a[i]+a[i+1];
	dequy1(n-1);
}
main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)	cin>>a[i];
		dequy1(n);
	}
}
