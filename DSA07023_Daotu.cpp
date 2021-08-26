// ĐẢO TỪ
#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    cin.ignore();
    for(int i = 1; i <= t; i++)
    {
        string s;
        getline(cin, s);
        stack<char> stk;
        for(int j = s.size()-1; j >= 0; j--)
        {
            while(s[j] != ' ' && j>=0)
            {
                stk.push(s[j]);
                j--;
            }
            while(stk.size()>0)
            {
                cout << stk.top();
                stk.pop();
            }
            if(s[j] == ' ') cout << s[j];
        }
        cout << endl;
    }
}
