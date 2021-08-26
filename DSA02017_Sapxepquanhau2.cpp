// SẮP XẾP QUÂN HẬU 2
#include<bits/stdc++.h>
using namespace std;
int n = 8, cheonguoc[30], cheoxuoi[30], danhdau[30], sum = 0, a[10][10], maxsum;
void init()
{
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];

    for(int i = 1; i <= n; i++)
        danhdau[i] = true;
    for(int i = 1; i <= 2*n-1; i++)
    {
        cheonguoc[i] = true;
        cheoxuoi[i] = true;
    }
}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(danhdau[j] && cheonguoc[i+j-1] && cheoxuoi[i-j+n])
        {
            danhdau[j] = cheonguoc[i+j-1] = cheoxuoi[i-j+n] = false;
            sum += a[i][j];
            if( i==n && maxsum < sum)
                maxsum = sum;
            else
                Try(i+1);
            danhdau[j] = cheonguoc[i+j-1] = cheoxuoi[i-j+n] = true;
            sum -= a[i][j];
        }
    }
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        init();
        maxsum = 0;
        Try(1);
        cout << maxsum << endl;
    }
}

