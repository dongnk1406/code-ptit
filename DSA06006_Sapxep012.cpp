// DSA06006 - SẮP XẾP [0 1 2]

#include<bits/stdc++.h>
using namespace std;

int n, a[100];
void sap_xep()
{
	vector<int> a(n);	//khai bao vector a co n phan tu
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	sort(a.begin(), a.end());

	for(int i = 0 ; i < a.size(); i++)
		cout << a[i] << " ";
	cout<<endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		sap_xep();
	}
	return 0;
}
