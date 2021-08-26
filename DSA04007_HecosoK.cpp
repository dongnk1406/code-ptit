#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int k;
		string a,b;
		cin >> k >> a >> b;
		while(a.length() > b.length())
			b = "0" + b;
		while(a.length() < b.length())
		 	a = "0" + a;

		string t = "";		// thay lais

		int du = 0;
		int j = a.length();
		for(int i = j-1; i>=0;i--)
		{
			int s = int(a[i] - '0') + int(b[i] - '0') + du;
			t = char(s % k + '0') + t;
			du = s / k;
		}

		if(du > 0)
			t = char(du + '0') + t;
			cout << t << endl;
	}
	return 0;
}
