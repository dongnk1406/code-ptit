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
		k-=j;
		if(i == n && k == 0)
            in();
		else if(i < n && k >= 0)
            backtrack_Kbit(i+1);

		k+=j;
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
