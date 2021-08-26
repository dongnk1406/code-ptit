// DSA06022 - SỐ NHỎ NHẤT VÀ NHỎ THỨ HAI
#include <bits/stdc++.h>
using namespace std;

int main()

{
	int t;
	cin >> t;
	while(t--)
	{
		int a[100],  n;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> a[i];

		sort(a, a+n);
		if(a[0] == a[1])
			cout << "-1" << endl;
		else
			cout << a[0] << " " << a[1] << endl;
	}

	return 0;

}
