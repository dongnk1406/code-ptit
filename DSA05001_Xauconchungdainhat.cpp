#include<bits/stdc++.h>
using namespace std;

int xau_con_chung(string s1, string s2)
{
	int m = s1.size();
	int n = s2.size();
	s1 = ' ' + s1;
	s2 = ' ' + s2;
	vector< vector<int> > c(m+1, vector<int>(n+1, 0));

	for(int i = 1 ; i <= m ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			if(s1[i] == s2[j])
				c[i][j] = c[i-1][j-1] + 1;
			else
				c[i][j] = max(c[i-1][j], c[i][j-1]);

		}

	}

	return c[m][n];
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		cout << xau_con_chung(s1, s2) << endl;
	}
	return 0;
}
