//SO SÁNH BIỂU THỨC
#include<bits/stdc++.h>
using namespace std;
string solve(string s);
main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        string str1, str2;
        cin >> str1 >> str2;
        str1 = solve(str1);
        str2 = solve(str2);
        if(str1 == str2)    cout << "YES";
        else    cout << "NO";
        cout << endl;
    }
}
string solve(string s)
{
    stack<int> stk;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
            stk.push(i);
        else if(s[i] == ')')
        {
            if(stk.size() > 0)
            {
                int top = stk.top();
                stk.pop();
                if(top == 0)    continue;
                else
                {
                    if(s[top-1] == '+')  continue;
                    else if(s[top-1] == '-')
                    {
                        for(int j = top; j <= i; j++)
                        {
                            if(s[j] == '+')  s[j] = '-';
                            else if(s[j] == '-')  s[j] = '+';
                        }
                    }
                }
            }
        }
    }
    string tmp;
    for(int h = 0; h < s.size(); h++)
        if(s[h] != '(' && s[h] != ')')
            tmp += s[h];
    return tmp;
}
