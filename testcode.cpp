#include <bits/stdc++.h>
using namespace std;
int X[30], n;
bool OK =true;
void Result(){
    for(int i=1; i<=n; i++)
        cout<<X[i];
    cout << " ";
}
void Next_Bits_String()
{
    int i=n;
    while(i>0 && X[i])
    {
        X[i]=0;
        i--;
    }
    if (i>0)
        X[i]=1;
    else
        OK = false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for(int i = 1; i<=n; i++)
            X[i]=0;
        while(OK)
        {
            Result();
            Next_Bits_String();
        }
        OK = true;
        cout << "\n";
    }
}
