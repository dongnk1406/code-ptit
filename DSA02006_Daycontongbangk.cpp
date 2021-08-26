// DÃY CON TỔNG BẰNG K

#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[150],b[150]; // mag b chua gia tri ket qua
int dem = 0;        // dem so luong ket qua thu duoc cua b
int sum = 0 ;

void in(int y)
{
	cout << "[";
	for(int i = 1; i < y; i++)
		cout << b[i] << " ";
	cout << b[y] << "]" << " ";
}
void Try(int x, int y, int z)
{
	for(int i = z+1; i <= n; i++)
    {
		sum = a[i] + x;
		b[y] = a[i];
		if(sum == k)
		{
			dem++;
			in(y);
		}
		else
			Try(a[i]+x,y+1,i);
	}
}
main()
{
	int t;
	cin>>t;
	while(t--)
    {
		cin >> n >> k;
		for(int i = 1; i <= n; i++)
            cin >> a[i];
    // sort follow dictionary
		sort(a+1, a+1+n);
		Try(0,1,0);
		if(dem == 0)
			cout << -1;
		//dem = 0;
		cout << endl;
	}
}

