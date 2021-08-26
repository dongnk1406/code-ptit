// BIỂU THỨC ĐÚNG DÀI NHẤT
#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int result = 0;
        stack<int> stk;
        stk.push(-1);
        int dem = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                stk.push(i);
            }
            else
            {
                stk.pop();
                if(!stk.empty())
                {
                    result = max(result, i-stk.top());
                    dem++;
                }
                if (stk.size() == 0)
					stk.push(i);
            }
        }
        cout << dem*2 << endl;
    }
}

// push vi tri mo, gap dong thi lay dong-mo, cap nhat max


