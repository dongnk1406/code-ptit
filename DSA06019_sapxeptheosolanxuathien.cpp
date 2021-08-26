// DSA06019 - SẮP XẾP THEO SỐ LẦN XUẤT HIỆN
// sap xep theo so lan xuat hien

#include<bits/stdc++.h>
using namespace std;

int a[1000], b[1000], c[1000];
int d = 0 , n;

void count()
{
	int m = 0 ;
	a[n] = 0;
	for(int i = 0 ; i < n ; i++)
	{
		m++;
		if(a[i] != a[i+1])
		{
			b[d] = a[i];
			c[d] = m;
			d++;
			m = 0;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;

		for(int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}

		sort(a, a+n);
		count();

		for(int  i = 0 ; i < d ; i++)
		{
			for(int j = 0 ; j < d ; j++)
			{
				if(c[j] < c[j+1])
				{
					swap(c[j], c[j+1]);
					swap(b[j], b[j+1]);
				}

			}
		}

		for(int i = 0 ; i < d ; i++)
		{
			for(int j = 0 ; j < c[i] ; j++)
			{
				cout << b[i] << " ";
			}
		}

		d = 0;
		cout << endl;
	}
	return 0;
}
