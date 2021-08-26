//SẮP XẾP DÃY CON LIÊN TỤC
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
		int a[n];
		int b, c;
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];

		for(int i = 0 ; i < n ; i++)
		{
			if(a[i] > a[i+1])
			{
				b = i;
				break;
			}
		}

		for(int i = n-1 ; i >= 0 ; i--)
		{
			if(a[i] < a[i-1])
			{
				c = i;
				break;
			}
		}

		int m1 = a[b], m2 = a[b];
		for(int i = b ; i <= c ; i++)
		{
			if(a[i] > m2)
				m2 = a[i];
			if(a[i] < m1)
				m1 = a[i];
		}

		for(int i = b-1 ; i >= 0 ; i--)
		{
			if(a[i] > m1)
				b = i;
		}

		for(int i = c+1 ; i < n ; i++)
		{
			if(a[i] < m2)
				c = i;
		}

		cout << b+1 << " " << c+1;
		cout << endl;

	}

	return 0;
}
