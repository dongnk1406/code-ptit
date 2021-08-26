// SẮP XẾP 1
#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    stack<int> stk;
    while(cin >> s)
    {
        int n;
        if(s == "push")
        {
            cin >> n;
            stk.push(n);
        }
        else if(s == "pop")
        {
            stk.pop();
        }
        else if(s=="show")
        {
            if(stk.empty())
            {
                cout << "empty\n";
                continue;
            }
            vector<int> tmp;
            while(!stk.empty())
            {
                int top = stk.top();
                tmp.push_back(top);
                stk.pop();
            }
            reverse(tmp.begin(),tmp.end());
            for(int i = 0; i < tmp.size(); i++)
            {
                cout << tmp[i] << " ";
                stk.push(tmp[i]);
            }
        }
        cout << endl;
    }
}
