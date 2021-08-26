// XÂU NHỊ PHÂN CÓ K BIT 1
#include<bits/stdc++.h>
using namespace std;
int n, k, c[30];

void in()
{
	for(int i = 1; i <= n; i++)
		cout << c[i];
	cout << endl;
}
void backtrack_Kbit(int i)
{
	for(int j=0; j<=1; j++)
	{
		c[i]=j;
		int dem = 0;
		if(i == n)
		{
		    for(int h = 1; h <= n; h++)
                if(c[h] == 1)
                    dem++;
            if(dem==k)
                in();
		}
        else
            backtrack_Kbit(i+1);

	}
}
main(){
	int t;
	cin >> t;
	while(t--)
	{
        cin >> n >> k;
		backtrack_Kbit(1);
	}
}
