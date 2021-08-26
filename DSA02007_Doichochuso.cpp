// ĐỔI CHỖ CÁC CHỮ SỐ
#include<bits/stdc++.h>
using namespace std;
string s, kq;
void Try(int k,string s)
{
    int n = s.length();
    if(k == 0)
        return;
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(s[i]<s[j])
            {
                swap(s[i],s[j]);
                kq = max(kq,s);
                Try(k-1,s);
                swap(s[i],s[j]);
            }
}
main()
{
    int t, k;
    cin >> t;
    while(t--)
    {
        cin >> k >> s;
        kq = s;
        Try(k,s);
        cout << kq << endl;
    }
}
