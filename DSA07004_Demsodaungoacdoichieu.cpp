// ĐẾM SỐ DẤU NGOẶC ĐỔI CHIỀU
#include<bits/stdc++.h>
using namespace std;
int solve(string str)
{
    // thuc hien luu nhung dau ngoac khong dung vao stk
    stack<char> stk;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '(' || str[i] == ')' && stk.size()==0)
            stk.push(str[i]);     // neu stk rong va str[i] == '('; ')'
        else if(str[i] == ')')
        {
            if(stk.size()>0 && stk.top()=='(')
                stk.pop();  // neu la cap ngoac dung thi xoa di
            else
                stk.push(str[i]);
        }
    }
    int dem1 = 0, dem2 = 0;
    while(stk.size()>0)
    {
        if(stk.top() == '(')
            dem1++;
        else
            dem2++;
        stk.pop();
    }
    // dao chieu mot nua dau ngoac moi loai, dao chieu them phan du cua tung loai neu co
    int result = dem1/2 + dem2/2 + dem1%2 + dem2%2;
    return result;
}
main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        string str;
        cin >> str;
        cout << solve(str) << endl;
    }
}
