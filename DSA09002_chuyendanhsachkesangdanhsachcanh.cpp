#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;
	string s;
	cin.ignore();
	int a[n+5][n+5];
	memset(a, 0, sizeof(a));		// tao vung nho
	for(int i = 1 ; i <= n ; i++)
	{
		getline(cin, s);
		for(int j = 0 ; j <= s.length() ; j++)
		{
			if((s[j] >= '1' &&  s[j] <= '9') && (s[j+1] >= '0'  &&  s[j+1] <= '9'))
			{
				int t = (s[j]-'0')*10 + (s[j+1] - '0');
				a[i][t] = 1;
			}
			else if(s[j] >= '1'  &&  s[j] <= (n + '0'))
			{
				if(i  <  (s[j] - '0'))
					a[i][s[j] - '0'] = 1;
			}

		}
	}
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = i+1 ; j <= n ; j++)
		{
			if(a[i][j])
				cout << i << " " << j;
			cout << endl;
		}

	}

	return 0;
}
//done
