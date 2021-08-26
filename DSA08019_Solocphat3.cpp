// SỐ LỘC PHÁT 3

#include<bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        queue <string> stk;
        stk.push("6");
        stk.push("8");
        string s = "";
        vector <string> a;
        while(s.length() <= n)
        {
            s = stk.front();
            stk.pop();
            stk.push(s + "6");
            stk.push(s + "8");
            a.push_back(s);
        }
        cout << a.size()-1 << endl;
        for(int j= a.size()-2; j>=0; j--)
            cout<<a[j]<<" ";
        cout << endl;
    }
}
