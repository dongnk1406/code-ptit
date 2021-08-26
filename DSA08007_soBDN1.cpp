// SỐ BDN 1
#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        long long n;
        cin >> n;
        vector<int> a;
        while(n)
        {
            a.push_back(n%10);
            n/=10;
        }
        reverse(a.begin(), a.end());
        // tim ra vi tri phan tu >=2
        for(int j = 0; j < a.size(); j++)
        {
            if(a[j] >= 2)
            {
                a[j] = 1;
                // gan tat ca so dang sau vt bang 1
                for(int k = j+1; k < a.size(); k++)
                    a[k] = 1;
            }
        }
        long long tmp = 0;
        // khi nay da thu duoc mot day do dai m, chua toan phan tu 1; hoac day nguyen ban neu phan
        // tu dau tien day do bang 1
        for(int h = 0; h < a.size(); h++)
                tmp += a[h]*pow(2, (a.size()-1)-h);
        cout << tmp << endl;
    }
}

/*
duyet tu so dau den cuoi, neu a[i] >=2 thi gan a[i]=1, cac phan tu sau i gan bang i = > so BDN max < n.
Chuyen so BDN do thanh so thap phan= > ket qua
VD: n = 200;
    BDN max = 111
    chuyen BDN max sang thap phan = > kq = 7
*/
