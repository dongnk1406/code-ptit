#include<bits/stdc++.h>
using namespace std;

void sum(int a[], int n)
{
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];


	int m = 0 ; // luu tong lon nhat cua mang con hien tai
	int k = 0 ; // vi tri tong lon nhat khi tim thay

	for(int i = 0 ; i < n ; i++)
	{
		// update tong max khi tim thay tai vi tri i(bang cach them phan tu hien tai vao tong max khi tim thay o vi tri i-1)
		k = k + a[i];
		// neu tong max am, cho no = 0
		k = max(k, 0);
		// update kq khi tong cua mang con hien tai tim dc max
		m = max(m, k);
	}

	cout << m;
	cout << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a[100], n;
		cin >> n;
		sum(a,n);
	}
	return 0;
}
