// SỐ NHỊ PHÂN TỪ 1 ĐẾN N
#include<bits/stdc++.h>
using namespace std;
long long np(int x)
{
    vector<int> a;
    while(x)
    {
        a.push_back(x%2); // them phan du
        x /= 2;
    }
    long long res = 0;
    // thuc hien viet nguoc lai tu cuoi len
    for(int i = a.size()-1; i >= 0; i--)
        res = res*10 + a[i];
    return res;
}
main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        for(int j = 1; j <= n; j++)
            cout << np(j) << " ";
        cout << endl;
    }
}
