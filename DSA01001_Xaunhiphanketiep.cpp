// xâu nhị phân kế tiếp

#include<bits/stdc++.h>
using namespace std;

void next_string(string s)
{
    /* xét từ cuối xâu lên đầu. Nếu chưa gặp số 0 thì gán la 1; những vị trí vừa xét qua bằng 0 */
    int i = s.length() - 1;
    while(i >= 0 && s[i] == '1' )
    {
        s[i] = '0';
        i--;
    }
    if (i >= 0)
        s[i] = '1';
    cout << s << endl;
}

int main()
{
    int t;  string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        next_string(s);
    }
}
