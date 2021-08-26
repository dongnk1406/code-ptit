// SẮP XẾP QUÂN HẬU 1
#include<bits/stdc++.h>
using namespace std;
int n ,cheonguoc[30], cheoxuoi[30], danhdau[30], dem;
void init()
{
    cin >> n;
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
            if(i==n)
                dem++;
            else
                Try(i+1);
            danhdau[j] = cheonguoc[i+j-1] = cheoxuoi[i-j+n] = true;
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
        dem = 0;
        Try(1);
        cout << dem << endl;
    }
}

