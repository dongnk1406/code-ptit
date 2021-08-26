
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];



		for(int i = 0 ; i < n ; i++)
		{
			int b;
			b = abs(x - a[i]);
			for(int j = i-1 ; j >= 0 ; j--)
			{
				if(b < abs(x - a[j]))
					swap(a[j], a[j+1]);
			}
		}

		for(int i = 0 ; i < n ; i++)
			cout << a[i] << " ";

		cout << endl;

	}
	return 0;
}
