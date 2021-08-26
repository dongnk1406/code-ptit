// BIẾN ĐỔI SỐ TỰ NHIÊN

#include<bits/stdc++.h>
using namespace std;
struct data
{
    int val;
    int dem;
};
int solve(int s)
{
    set<int> arr;
    arr.insert(s);
    queue<data> stk;
    stk.push({s,0});
    while(!stk.empty())
    {
        data tmp = stk.front();
        stk.pop();
        if(tmp.val == 1)
            return tmp.dem;
        if(tmp.val-1 == 1)
            return tmp.dem+1;
         if(arr.find(tmp.val-1) == arr.end() && tmp.val-1 > 0)
         {
             stk.push({tmp.val-1,tmp.dem+1});
             arr.insert(tmp.val-1);
         }
         for(int j = 2; j*j <= tmp.val; j++)
         {
             if(tmp.val%j == 0)
             {
                 if(arr.find(tmp.val/j) == arr.end())
                 {
                     stk.push({tmp.val/j,tmp.dem+1});
                     arr.insert(tmp.val/j);
                 }
             }
         }
    }
}
main()
{
    int test;
    cin >> test;
    for(int i = 1; i <= test; i++)
    {
        int s;
        cin >> s;
        cout << solve(s) << endl;
    }
}

