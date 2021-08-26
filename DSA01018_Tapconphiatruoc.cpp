// TẬP CON LIỀN KỀ PHÍA TRƯỚC
#include<bits/stdc++.h>
using namespace std;

int a[100], n, k;
// ham kiem tra co la tap con dau tien hay khong
bool check()
{

    for(int i=1; i<=k ; i++)
    {
        if(a[i] != i)
            return 0;
    }
    return 1;
}
void gernerate()
{
    // neu la tap con dau tien, thi in ra tap con cuoi cung
    if(check())
    {
        for(int i=1; i<=k; i++)
            a[i] = n-k+i;
    }
    else
    {
        int i = k;
        // tim vi tri a[i] - a[i-1] != 1
        while( a[i] - a[i-1] == 1)
            i--;

        a[i] = a[i] - 1;
         // gan nhung vi tri tu i+1 toi k bang gia tri toi han
        for(int j = i+1; j <=k; j++)
            a[j] = n-k+j;
    }
    for(int h=1; h<=k; h++)
        cout<< a[h]<<' ';
    cout<<endl;
}
main()
{

    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1; i<= k; i++)
            cin>>a[i];
        gernerate();
    }
}
