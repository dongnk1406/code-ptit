// SỐ MAY MẮN
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
        // end4: ket qua cuoi cung khi dem cac so 4; end7:ket qua cuoi cung khi dem cac so 7
        // dem 4, dem7 dung de dem cac chu so 4 va chu so 7
        int end4 = 1000000, end7 = 1000000, dem4 = 0, dem7 = 0;
        // duyet tat ca cac bộ số d4 va d7, tim bo dau tien nho nhat
        for(int i = 0; i <= n; i++)
        {
            // tim so luong chu so 7
            if(n >= 4*i && (n-4*i)%7 == 0)
            {
                dem4 = i;
                dem7 = (n-4*i)/7;
                //  So nao it chu so hon thi so do nho hon. VD: 4477 > 477
                if(end4+end7 > dem4+dem7)
                {
                    end4 = dem4;
                    end7 = dem7;
                }
            }
        }
        if(end4*4+end7*7 == n)
        {
            //in ra cac chu so 4 truoc de dam bao la so be nhat co the
            for(int i = 0; i < end4; i++)
                cout << 4;
            for(int i = 0; i < end7; i++)
                cout << 7;
        }
        else
            cout << -1;
        cout << endl;
    }
}

/* dem4*4 + dem7*7 = n
    dem4 = (n-dem7*7)/4
    dem7 = (n-dem4*4)/7
*/
