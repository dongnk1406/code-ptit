// NỐI DÂY 1
#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long val;
        // khoi tao hang doi uu tien, greater giup sap xep tang dan moi khi co phan tu them vao ans
        priority_queue<long long, vector<long long>, greater<long long> > ans;
        for(int i = 0; i < n; i++)
        {
            cin >> val;
            ans.push(val);    // them phan tu vao ans
        }
        long long result = 0;
        while(ans.size()>1)
        {
            //thuc hien lay ra 2phan tu dau tien cuar queue, gan val1 = phan tu dau tien trong queue
            long long val1 = ans.top();
            ans.pop();    //Xoa bo phan tu dau tien hien tai
            long long val2 = ans.top();
            ans.pop();
            long long tmp = val1 + val2;
            ans.push(tmp);//Them tong 2 phan tu vua lay ra vao queue , khi do queue se tu dong sap xep tang dan
            result += tmp;
        }
         cout << result << endl;
    }
}
