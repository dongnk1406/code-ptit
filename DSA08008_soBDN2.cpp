// SỐ BDN 2
#include<bits/stdc++.h>
using namespace std;
string solve(int n)
{
    queue<string> stk;
    stk.push("1");
    while(!stk.empty())
    {
        string kq = stk.front();
        stk.pop();
        long long tmp = 0;
        // chuyen gia tri trong xau thanh so int. Vd: "909" - > 909
        for(int i = 0; i < kq.size(); i++)
            tmp = tmp*10+(int)(kq[i]-'0');
        // neu so tmp chia het, thi tra ve ket qua luon
        if(tmp%n == 0)
            return kq;
        else
        {
            // uu tien them 0 truoc vi kq can tim la so be nhat
            stk.push(kq+"0");
            stk.push(kq+"1");
        }
    }
}
main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
}
