//CHUYỂN ĐỔI TIỀN TỐ THÀNH TRUNG TỐ
#include<bits/stdc++.h>
using namespace std;

string tiento_trungto(string str)
{
    stack<string> stk;
    for(int i = str.size()-1; i >= 0; i--)
    {
        if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            string x= stk.top();
            stk.pop();
            string y = stk.top();
            stk.pop();
            string ketqua = "(" + x + str[i] + y + ")";   // string cho phep noi ki tu
            stk.push(ketqua);
        }
        else
            stk.push(string(1,str[i]));   // string(1,s[i]): la bien doi s[i] la string chu khong phai ki tu
    }

    return stk.top();   // tra ve bieu thuc trung to
}
main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        string str;
        cin >> str;
        cout << tiento_trungto(str) << endl;
    }
}
