// GAP DOI DAY SO
#include<bits/stdc++.h>
using namespace std;

int solve(long long n, long long k)
{
    // [1, 2, 1, 3, 1, 2, 1, 4, 1, 2, 1, 3, 1, 2, 1] la ket qua khi bien doi3 buoc, thi ta thay k le bang 1
    if(k % 2 == 1)
        return 1;
    // xet gioi han cua k: 1 <= k < = 2^n-1
    long long limit = pow(2, n-1);
    if(k == limit)
        return n;
    else if(k < limit)
    // thuc hien gap doi day so n-1 lan
        return solve(n-1, k);
    else
        return solve(n-1, k-limit);
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << solve(n,k) << endl;
    }
}
