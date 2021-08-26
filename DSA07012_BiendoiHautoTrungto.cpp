// DSA07012 - BIẾN ĐỔI HẬU TỐ - TRUNG TỐ
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		stack<string> stk;

		for(int i = 0 ; i < s.size() ; i++)
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
			{
				string s1 = stk.top();
				stk.pop();

				string s2 = stk.top();
				stk.pop();

				string s3 = "(" + s2 + s[i] + s1 + ")";
				stk.push(s3);
			}

			else
				stk.push(string(1, s[i]));
		}

		cout << stk.top();
		cout << endl;
	}

	return 0;
}
