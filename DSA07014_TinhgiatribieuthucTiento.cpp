// DSA07014 - TÍNH GIÁ TRỊ BIỂU THỨC TIỀN TỐ
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

		for(int i = s.size()-1 ; i >= 0 ; i--)
		{
			if(s[i] >= '0'  &&  s[i] <= '9')
				stk.push(int (s[i] - '0'));
			else
			{
				int a,b;
				a = stk.top();
				stk.pop();
				b = stk.top();
				stk.pop();

				if(s[i] == '+')
					stk.push(a+b);
				if(s[i] == '-')
					stk.push(a-b);
				if(s[i] == '*')
					stk.push(a*b);
				if(s[i] == '/')
					stk.push(a/b);
			}
		}

		cout << stk.top();
		cout << endl;
	}
	return 0;
}
