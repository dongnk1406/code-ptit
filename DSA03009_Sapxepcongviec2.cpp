// SẮP XẾP CÔNG VIỆC 2
#include<bits/stdc++.h>
using namespace std;
struct task
{
    int jobID, deadline, profit;
};
task c[1099];
int cmp(task a, task b)
{
    return a.profit > b.profit;     // vi de yeu cau loi nhuan lon nhat
}

main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> c[i].jobID >> c[i].deadline >> c[i].profit;
        sort(c,c+n,cmp);
        int dem = 0, maxProfit = 0;
        int check[1099] = {0};  // kiem tra xem toi han deadline
        for(int j = 0; j < n; j++)
        {
            // Tim thoi gian ma co the thuc hien 1 cong viec
            while(c[j].deadline > 0 && check[c[j].deadline] != 0)
                c[j].deadline--;
            //Neu tai thoi diem c[j].deadline hien tai chua co cong viec nao dang lam thi lam luon
            while(c[j].deadline > 0 && check[c[j].deadline] == 0)
            {
                check[c[j].deadline] = 1;
                dem++;
                maxProfit += c[j].profit;
            }
        }
        cout << dem << " " << maxProfit << endl;
    }
}
