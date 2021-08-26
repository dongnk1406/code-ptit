// Đặt tên
#include <bits/stdc++.h>
using namespace std;

int a, b;
vector <string> c;

void dat_ten(string i)
{
    if(i.length() == b)
    {
        c.push_back(i);
        return;
    }
    for(char j = i[i.length()-1] + 1 ; j <= 'Z', j < 'A'+a ; j++)
        dat_ten(i+j);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        c.clear();
        cin >> a >> b;
        for(char i = 'A' ; i <= 'Z', i < 'A'+a-1 ; i++)
            dat_ten(string(1, i));
        sort(c.begin(), c.end());
        for(int i = 0 ; i <= c.size()-1 ; i++)
            cout << c[i] << endl;
    }
    return 0;
}
