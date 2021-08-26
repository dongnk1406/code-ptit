// DÃY NGOẶC ĐÚNG DÀI NHẤT
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
        int result = 0, n = s.size();
        stack<int> stk;
        stk.push(-1);   // them vao phan tu co so
        // i dung de luu vi tri bat dau va vi tri ket thuc. do dai = ket thuc - vi tri truoc cua bat dau
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            {
                stk.push(i);
            }
            else
            {
                stk.pop();// xoa di vi tri bat dau cua cap ngoac day
                if(!stk.empty())
                {
                    result = max(result, i-stk.top());  // stk.top luc nay se la vi tri truoc cua bat dau
                }
                else
                    stk.push(i);
            }
        }
        cout << result << endl;

    }
}
