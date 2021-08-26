// BIỂU THỨC TƯƠNG ĐƯƠNG
#include<bits/stdc++.h>
using namespace std;
void solve(string str);
main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        string str;
        cin >> str;
        solve(str);
    }
}
void solve(string str)
{
    stack<int> stk; // luu vi tri ( va )
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '(')
            stk.push(i);
        else if(str[i]==')')
        {
            if(stk.size()>0)
            {
                int top = stk.top();
                stk.pop();
                if(top == 0)    continue;   // neu la dau ( dau tien
                else if(str[top-1] == '+')  continue;
                // neu la dau - truoc ( thi dao dau toan tu trong bieu thuc
                else if(str[top-1] == '-')
                {
                    for(int j = top; j <= i; j++)
                    {
                        if(str[j] == '+')   str[j] = '-';
                        else if(str[j] == '-') str[j] = '+';
                    }
                }
            }
        }
    }
    for(int k = 0; k < str.size(); k++)
        if(str[k] != '(' && str[k] != ')')
            cout << str[k];
        cout << endl;
}
