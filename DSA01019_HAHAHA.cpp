// HAHAHA
#include <bits/stdc++.h>
using namespace std;

int a[100], n;

void in()
{
    for(int i = 1 ; i <= n ; i++)
    {
        if(a[i])
            cout << "H";
        else
            cout << "A";
    }
    cout << endl;
}

int check()
{
    if(a[1] == 0)
        return 0;
    if(a[n] == 1)
        return 0;
    for(int i = 2 ; i<= n ; i++)
        if(a[i]  &&  a[i-1])
            return 0;
    return 1;
}

void haha(int i)
{
    for(int j = 0 ; j <= 1 ; j++)
    {
        a[i] = j;
        if(i == n)
        {
            if(check())
                in();
        }
        else
            haha(i+1);
    }


}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for(int i = 0 ; i <= n ; i++)
            a[i] = 0;
        haha(1);
    }

    return 0;
}
