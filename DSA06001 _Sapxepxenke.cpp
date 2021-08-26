//DSA06001 - SẮP XẾP XEN KẼ
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n], b[n];

		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
		sort(a, a+n);

		int dau = 0 ;
		int cuoi = n-1;

		for(int i = 0 ; i < n ; i++)
		{
			if(i % 2 == 0)
			{
				b[i] = a[cuoi];
				cuoi--;
			}
			else
			{
				b[i] = a[dau];
				dau++;
			}
		}

		for(int i = 0 ; i < n ; i++)
			cout << b[i] << " ";

		cout << endl;
	}
	return 0;
}
