// TÌM KIẾM NHỊ PHÂN
#include<bits/stdc++.h>
using namespace std;
long long n, k, a[1234567];
int solve();
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        int result = solve();
        if(result == -1)
            cout << "NO\n";
        else
            cout << result << endl;
    }
}
int solve()
{
    int right = n, left = 0;
    while(right >= left)
    {
        int mid = (left+right)/2;
        if(a[mid] == k)
            return mid;
        else if(a[mid] < k)
            left = mid +1;
        else if(a[mid] > k)
            right = mid - 1;
    }
    return -1;
}
