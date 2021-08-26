// TẬP HỢP
#include <bits/stdc++.h>
using namespace std;

int n, k, s,dem ,sum, C[100], ok = 1;

int check()
{
    sum = 0;
    for(int i = 1; i <= k; i++)
        sum += C[i];
    if(sum == s) return true;
    return false;
}

void generate_combination()
{
    int i = k;
    while(i > 0 && C[i] == n-k+i)
        i--;
    if(i == 0)
        ok = 0;
    else
    {
        C[i]++;
        for(int j = i+1; j <= k; j++)
            C[j] = C[j-1] + 1;
    }
}

main()
{
    while(cin >> n >> k >> s && n && k && s)
    {
        dem = 0;
        // cai dat cau hinh dau tien
        for(int i = 1; i <= k; i++)
            C[i] = i;
        // kiem tra dieu kien cua flag
        while(ok)
        {
        	if(n<k)
        	{
        		dem=0;
        		break;
			}
            if(check())
                dem++;
            // thuc hien voi cau hinh ke tiep
            generate_combination();
        }
        cout << dem << endl;
        ok = 1;
    }
}
