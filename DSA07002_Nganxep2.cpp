// SẮP XẾP 2
#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n;  cin >> t;
    string s;
    stack<int> stk;
    while(t--)
    {
        cin >> s;
        if(s == "PUSH")
        {
            cin >> n;
            stk.push(n);
        }
        else if(s == "POP" && !stk.empty())
            stk.pop();
        else if(s=="PRINT")
        {
            if(stk.empty())
                cout << "NONE\n";
            else
                cout << stk.top() << endl;
        }
    }
}
