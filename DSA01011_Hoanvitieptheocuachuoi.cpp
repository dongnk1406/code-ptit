// HOÁN VỊ TIẾP THEO CỦA CHUỖI SỐ
#include<bits/stdc++.h>
using namespace std;

void next_permutation(int n, int a[])
{
    int i = n - 1;
//  Chú ý: Các ký tự số trong dãy có thể trùng nhau.
    while(i > 0 && a[i] >= a[i+1])
        i--;

    if(i == 0)
        cout << "BIGGEST\n";
    else
    {
        int j = n;
        while(a[i] >= a[j])
            j--;
        swap(a[i], a[j]);
        int m = i + 1, p = n;
        while(m < p)
        {
            swap(a[m], a[p]);
            m++;    p--;
        }


        for(int i = 1; i <= n; i++)
            cout << a[i];
         cout << endl;
    }
}
main()
{
    int t,  testcase, a[100];
    string s;
    cin >> t;
    while(t--)
    {
        cin >> testcase >> s;
        cout << testcase << " ";
        int n = s.length();
        for(int i = 1; i <= n; i++)
            a[i] = int(s[i-1] - '0');   // chuyen tu char sang int
        next_permutation(n,a);
    }
}
