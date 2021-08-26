// THỨ TỰ CẶP DẤU NGOẶC
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
        stack<int> stk;
        int left = 1;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i]== '(')
            {
                cout << left << " ";
                stk.push(left);
                left++;
            }
            else if(s[i] == ')')
            {
                cout << stk.top() << " ";
                stk.pop();
            }
        }
        cout << endl;
    }
}
