// ĐẾM DÃY
#include<bits/stdc++.h>
using namespace std;
long long mod = 123456789;
//2^(n-1)
long long poW(long long n)
{
    if(n == 0)
        return 1;
    if(n == 1)
        return 2;
    long long val = poW(n/2);
    if(n%2==0)
        return ((val%mod)*(val%mod))%mod;
    else
        return (2*(val%mod)*(val%mod))%mod;
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << poW(n-1) << endl;
    }
}
