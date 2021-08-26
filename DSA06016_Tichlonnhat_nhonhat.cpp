//TÍCH LỚN NHẤT - NHỎ NHẤT
#include<bits/stdc++.h>
using namespace std;

void min_max(long long a[], long long b[], long long n, long long m)
{
	long long max = a[0];
	for(int i = 1 ; i < n ; i++)
	{
		if(max < a[i])
			max = a[i];
	}

	long long min = b[0];
	for(int j = 1 ; j < m ; j++)
	{
		if(min > b[j])
			min = b[j];
	}

	cout << min * max;
	cout << endl;
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long a[100000], b[100000];
		long long n, m;
		cin >> n >> m;

		for(int i = 0 ; i < n ; i++)
			cin >> a[i];

		for(int j = 0 ; j < m ; j++)
			cin >> b[j];

		min_max(a,b,n,m);


	}

	return 0;
}
