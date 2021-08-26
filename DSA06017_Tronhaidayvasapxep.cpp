// DSA06017 - TRỘN HAI DÃY VÀ SẮP XẾP
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int b,c;
		cin >> b >>c;
		vector<int> a(b+c);

		for(int i = 0 ; i < a.size() ; i++)
			cin >> a[i];

		sort(a.begin(), a.end());

		for(int  i = 0 ; i < a.size() ; i++)
			cout << a[i] << " ";

		cout << endl;
	}
	return 0;
}

//done
