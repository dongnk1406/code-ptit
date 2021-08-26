// HOÁN VỊ XÂU KÝ TỰ
#include<bits/stdc++.h>
using namespace std;
int n, chuaxet[20], kq[20];
string s;
void in()
{
    // in ra lan luot tai vi tri a[i]
    for(int i = 1; i <= n; i++)
        cout << s[kq[i] -1];    // tru di 1 vi string tu 0 toi n-1
    cout << " ";
}
void string_Try(int i)
{
    for(int j = 1; j <= n; j++)
        if(chuaxet[j])
        {
            kq[i] = j;
            chuaxet[j] = false;
            if(i == n)  in();
            else
                string_Try(i+1);
            chuaxet[j] = true;
        }
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s;
        n = s.length();
        for(int i = 1; i <= n; i++)
            chuaxet[i] = true;
        string_Try(1);
        cout << endl;
    }
}
