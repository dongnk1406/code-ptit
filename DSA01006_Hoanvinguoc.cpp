// hoán vị ngược

#include<bits/stdc++.h>
using namespace std;

int OK = 1;
void in(int n, int c[])
{
    for(int i = 1; i <= n; i++)
        cout << c[i];
    cout << " ";
}
void back_next_permutation(int n, int c[])
{
    int i = n-1;
    while(i > 0 && c[i] < c[i+1])
        i--;
    if(i == 0)
        OK = 0;
    else
    {
        int j = n;
        while(j > 0 && c[i] < c[j])
            j--;
        swap(c[i], c[j]);
        int m = i+1, p = n;
        while( m <= p)
        {
            swap(c[m], c[p]);
            m++;    p--;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, c[20];
        cin >>n;
        for(int i = n; i >= 1; i--)
            c[n-i+1] = i;
        while(OK)
        {
            in(n,c);
            back_next_permutation(n,c);
        }
        OK = 1;
        cout<<endl;
    }
}
