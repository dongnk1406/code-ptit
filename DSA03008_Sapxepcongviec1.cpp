// SẮP XẾP CÔNG VIỆC 1
#include<bits/stdc++.h>
using namespace std;
struct task
{
    int start, finish;
};
task c[1099];
int cmp(task a, task b)
{
    return a.finish < b.finish; // sap xep toi gian hoan thanh cong viec tang dan vi
                                //de bai yeu cau dua ra so cong viec lam duoc nhieu nhat
}
main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> c[i].start;
        for(int i = 0; i < n; i++)
            cin >> c[i].finish;
        sort(c, c+n, cmp);
        int dem = 1, k = 0;    // k la lua chon cong viec dau tien lam phuong an toi uu
        for(int j = 1; j < n; j++)
        {
            if(c[j].start >= c[k].finish)
            {
                dem++;
                k = j;      // thiet lap lai lua chon cong viec dau tien
            }
        }
        cout << dem << endl;
     }
}

