// GIÁ TRỊ NHỎ NHẤT CỦA XÂU
#include<bits/stdc++.h>
using namespace std;
void min_Solve(int k, string s)
{
    int dem[12345] = {0}, n = s.size();
    for(int i = 0; i < n; i++)
        dem[s[i]]++;    // mang dem tai phan tu s[i] cua string

    priority_queue<int, vector<int> > a;   // tao priotiy queue uu tien phan tu lon hon
    for(int i = 0; i < n; i++)
    {
        if(dem[s[i]] > 0)
        {
            a.push(dem[s[i]]);
            dem[s[i]] = 0;      // gan bang 0 vi neu khong se bi push them nhieu lan
        }
    }

    // thuc hien k buoc xoa phan tu
    while(k>0 && a.size()>0)
    {
        k--;
        int x = a.top();
        a.pop();
        x--;    // giam gia tri phan tu lon nhat, tuc la dem[s[i]]--
        a.push(x);  // tien hanh them nguoc lai, de queue sap xep lai, va ta se lay duoc phan tu moi lon nhat
    }
    long long result = 0;
    while(!a.empty())
    {
        int y = a.top();
        a.pop();
        result += y*y;
    }
    cout << result << endl;
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;  string s;
        cin >> k >> s;
        min_Solve(k,s);
    }
}
