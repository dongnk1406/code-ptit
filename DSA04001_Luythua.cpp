// LŨY THỪA
#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;

long long poW(int n, int k)
{
    if(k == 0)
        return 1;
    // tinh luy thua tren mot nua
    long long x = poW(n, k/2);
    if(k % 2 == 0)
        return x*x%mod;
    return n*(x*x%mod)%mod;
}
main()
{
    int n,k,t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << poW(n,k) << endl;
    }
}
