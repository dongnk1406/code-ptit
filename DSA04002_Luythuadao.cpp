// LŨY THỪA ĐẢO

#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;

// tinh n^k
long long poW(long long n, long long k)
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
	int t;;
	cin >> t;
	while(t--)
	{
	    long long n, k = 0;
		cin >> n;
		long long tmp = n;
		// thuc hien dao nguoc so n --> thu duoc k
 		while(tmp > 0)
		{
			k = k*10 + tmp%10;
			tmp /= 10;
		}
		long long s = poW(n,k);
		cout << s%mod << endl;
	}
}
