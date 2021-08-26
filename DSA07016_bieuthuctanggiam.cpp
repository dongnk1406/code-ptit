// BIỂU THỨC TĂNG GIẢM
#include<bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>>s;
        int k = 1;
        stack <int> stk;
        stk.push(1);
        for(int i=0; i< s.length(); i++)
        {
            if(s[i] == 'I' )
            {
                while(!stk.empty())
                {
                    cout<<stk.top();
                    stk.pop();
                }
            }
            stk.push(k+1);
            k++;
        }
        while(!stk.empty())
        {
            cout<<stk.top();
            stk.pop();
        }
        cout<<endl;
    }
}


