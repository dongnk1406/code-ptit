// TẬP QUÂN SỰ
#include<bits/stdc++.h>
using namespace std;

int OK = 1;
void next_combination(int n, int k, int c[])
{
    int i = k,j;
    while(i > 0 && c[i] == n-k+i)
        i--;
    if(i > 0)
    {
        c[i] = c[i] + 1;
        for(j = i + 1; j <= k; j++)
            c[j] = c[j-1] + 1;
    }

    else
        OK = 0;
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, dem, a[20], c[20], i, j;
        cin >> n >> k;
        for(int i = 1; i <= k; i++)
        {
            cin >> a[i];
            c[i] = a[i];
        }

        next_combination(n,k,c);
        dem = 0;
        for(i = 1; i <= k; i++)
            for(j = 1; j <= k; j++)
        // so sanh gia tri goc va gia tri sau khi sinh
                if(c[j] == a[i])
                    dem++;
        // neu tat ca phan tu deu thay doi -> xog bai toan
        if(dem == k)
            cout << k << endl;
        // in ra so phan tu thay doi
        else
            cout << k-dem << endl;
    }
}
