// DSA06021 - TÌM KIẾM TRONG DÃY SẮP XẾP VÒNG

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, x, pos;
		cin >> n >> x;
		int a[n];
		for(int i = 1 ; i <= n ; i++)
			cin >> a[i];

		for(int i = 1 ; i <= n ; i++)
		{
			if(a[i] == x)
				pos = i;
		}
		cout << pos;
		cout << endl;
	}
	return 0;

}
