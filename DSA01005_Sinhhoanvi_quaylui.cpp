// SINH HOÁN VỊ quay lui
#include<bits/stdc++.h>
using namespace std;
int n,danhdau[20], kq[20];
void in()
{
    for(int i = 1; i <= n; i++)
        cout << kq[i];
    cout << " ";
}
void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(danhdau[j])
        {
            kq[i] = j;
            danhdau[j] = false;
            if(i == n)  in();
            else
                Try(i+1);
            danhdau[j] =true;
        }
    }
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
            danhdau[i]= true;
        Try(1);
        cout << endl;
    }
}
