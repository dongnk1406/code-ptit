// DSA07010 - BIẾN ĐỐI TIỀN TỐ - HẬU TỐ
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

		for(int i = s.size()-1 ; i >= 0 ; i--)
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
			{
				string s1 = stk.top();
				stk.pop();

				string s2 = stk.top();
				stk.pop();

				string s3 = s1 + s2 + s[i];
				stk.push(s3);
			}

			else
				stk.push(string(1, s[i]));
		}

		cout << stk.top();
		cout << endl;
	}
}
