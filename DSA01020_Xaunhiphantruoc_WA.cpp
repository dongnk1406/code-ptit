// xau nhi phan truoc
#include<bits/stdc++.h>
using namespace std;

void next_string(string s)
{
    int i = s.length() - 1;
    while(i >= 0 && s[i] == '0')
    {
        s[i] = '1';
        i--;
    }
    if( i >= 0)
        s[i] = '0';
    cout << s << endl;
}

main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        next_string(s);
    }
}
