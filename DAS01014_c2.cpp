#include <iostream>
using namespace std;
int X[100],sum, n, k,s,dem=0;

void Try(int i)
{
	for (int j=X[i-1]+1;j<= n-k+i;j++)
	{
		X[i] = j;
		if (i == k)						//sinh to hop co k phan tu
		{
			sum=0;
			for(int h=1;h<=k;h++)		// tinh tong cua k phan tu
				sum+=X[h];
			if(sum==s)	dem++;
		}
		else
			Try(i + 1);
	}
}
main()
{

	while(1)
	{
		cin>>n>>k>>s;
		dem=0;
		if(n==0 && k==0 && s==0) break;
		X[0]=0;
		Try(1);
		cout << dem << endl;
	}
}
