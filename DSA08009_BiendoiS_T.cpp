// BIẾN ĐỔI S – T
#include<bits/stdc++.h>
using namespace std;
struct data
{
    int val;
    int dem;
};
int solve(int s, int t)
{
    set<int> arr;
    arr.insert(s);
    queue<data> stk;
    stk.push({s,0});
    while(!stk.empty())
    {
        data tmp = stk.front();
        stk.pop();
        if(tmp.val == t)
            return tmp.dem;
        if(tmp.val*2 == t || tmp.val-1 == t)
            return tmp.dem+1;
        if(arr.find(tmp.val*2) == arr.end() && tmp.val < t)
        {
            stk.push({tmp.val*2,tmp.dem+1});
            arr.insert(tmp.val*2);
        }
         if(arr.find(tmp.val-1) == arr.end() && tmp.val-1)
         {
             stk.push({tmp.val-1,tmp.dem+1});
             arr.insert(tmp.val-1);
         }
    }
}
main()
{
    int test;
    cin >> test;
    for(int i = 1; i <= test; i++)
    {
        int s,t;
        cin >> s >> t;
        cout << solve(s,t) << endl;
    }
}
