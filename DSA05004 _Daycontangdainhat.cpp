// DÃY CON TĂNG DÀI NHẤT
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[1000], b[1000] = {0}, c;
	c = 0;

	for(int i = 1 ; i <= n ; i++)
		cin >> a[i];

	for(int i = 1 ; i <= n ; i++)
	{
		b[i] = 1;
		for(int j = 1 ; j < i ; j++)
		{
			if(a[i] > a[j])
				b[i] = max(b[i], b[j] + 1);
		}
		c = max(c, b[i]);
	}

	cout << c;

	return 0;
}
