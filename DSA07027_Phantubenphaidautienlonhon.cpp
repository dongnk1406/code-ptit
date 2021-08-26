// DSA07027 - PHẦN TỬ BÊN PHẢI ĐẦU TIÊN LỚN HƠN

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long n;
		cin >> n;
		long a[n];
		deque<int> b;

		for(int i = 1 ; i <= n ; i++)
			cin >> a[i];
		for(int i = 1 ; i <= n ; i++)
		{
			int c = 0;	// danh dau
			for(int j = i ; j <= n ; j++)
			{
				if(a[i] < a[j])
				{
					b.push_back(a[j]);
					c = 1;
					break;
				}
			}

			if(c == 0)
				b.push_back(-1);
		}

		while(n--)
		{
			cout << b.front() << " ";
			b.pop_front();
		}
		cout << endl;
	}
	return 0;
}
