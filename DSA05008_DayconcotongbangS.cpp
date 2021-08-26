#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, s;
		cin >> n >> s;

		int a, b[50000] = {0};
		b[0] = 1;

		for(int i = 1; i <= n ; i++)
		{
			cin >> a;

			for(int j = s ; j >= a ; j--)
			{
				if(b[j-a] == 1)
					b[j] = 1;
			}
		}

		if(b[s] == 1)
		{
			cout << "YES";
		 		cout << endl;
		}

		else
		{
			cout << "NO";
			cout <<endl;
		}

	}
	return 0;
}
