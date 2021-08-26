// sinh tổ hợp
#include<bits/stdc++.h>
using namespace std;

int OK = 1;
void in(int k, int c[])
{
    for(int i = 1; i <= k; i++)
        cout << c[i];
    cout << " ";
}
void next_combination(int n, int k, int c[])
{
    int i = k;
    while(i > 0 && c[i] == n-k+i)
        i--;
    if(i == 0)
        OK = 0;
    else
    {
        c[i] = c[i] + 1;
        for(int j = i + 1; j <= k; j++)
            c[j] = c[j-1] + 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, c[20];
        cin >> n >> k;
        for(int i = 1; i <= n; i++)
            c[i] = i;
        while(OK)
        {
            in(k,c);
            next_combination(n,k,c);
        }
        OK = 1;
        cout<<endl;
    }
}
