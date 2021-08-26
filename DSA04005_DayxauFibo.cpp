#include<bits/stdc++.h>
using namespace std;
long long F[93];

void Solve(long long n, long long k)
{
	while(n>2)
	{
		if(k <= F[n-2]) // neu la day <= vi tri F[n-2]; phai nho la <=
			n-=2;        //lam viec tiep voi day F thu [n-2]
		else
		{
			k -= F[n-2]; // tru di phan da lam viec roi
			n -= 1;     //lam viec tiep voi day F thu [n-1]
		}
	}
	if(n==1) cout<<"A";
	else if(n == 2) cout<<"B";
}

main()
{
	F[1]=F[2]=1;
	for(int i=3;i<=92;i++)
	{
		F[i]=F[i-2]+F[i-1];
	}
	int t;
	long long n, k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
		Solve(n,k);
		cout<<endl;
	}
}
