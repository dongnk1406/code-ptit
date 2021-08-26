// DSA07013 - TÍNH GIÁ TRỊ BIỂU THỨC HẬU TỐ
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
		stack<int> stk;

		for(int  i = 0 ; i < s.size(); i++)
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
			{
				int a = stk.top();
				stk.pop();

				int b = stk.top();
				stk.pop();

				int c;

				if(s[i] == '+')
					c = a + b;
				else if(s[i] == '-')
					c = b - a;
				else if(s[i] == '*')
					c = a * b;
				else if(s[i] == '/')
					c = b / a;
				else
				{
					c = b;
					for(int i = 0 ; i < a - 1; i ++)
						c = c * b;
				}
				stk.push(c);
			}
			else
				stk.push(s[i] - '0');
		}

		cout << stk.top();
		cout << endl;
	}

	return 0;
}
