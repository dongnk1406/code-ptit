// KIỂM TRA BIỂU THỨC SỐ HỌC
// bao toan bi thua cap ngoac () khi trong () khong  co + - * / . VD: ((a+b)) sai vi trong cap ngoac dau tien khong co phep  toan
#include<bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        int checkthua;  // check xem co thua dau ngoac hay khong
        getline(cin,s); // dung getline vi nhap dong co khoang trong
        stack<char> stk;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ')')
            {
                checkthua = true;
                char top = stk.top();
                stk.pop();
                // tim dau ( dau tien tuong ung
                while(top != '(')
                {
                    if(top == '+' || top == '-' || top == '*' || top == '/')
                        checkthua =false;
                    top = stk.top();
                    stk.pop();
                }
                if(checkthua)       // neu checkthua == true
                    break;
            }
            else
            stk.push(s[i]);
        }
        if(checkthua)   cout << "Yes\n";
        else    cout << "No\n";
    }
}
