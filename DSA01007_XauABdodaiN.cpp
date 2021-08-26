// xâu AB có độ dài n
#include<bits/stdc++.h>
using namespace std;
int OK = 1;
void in(int n, char s[])
{
    for(int i = 1; i <= n; i++)
        cout << s[i];
    cout << " ";
}
void nextAB(int n,char s[])
{
	int i = n;
	// tim tu cuoi day len, phan tu A dau tien thi gan la B, nhung phan tu vua duyet qua la A
	while(s[i] != 'A' && i > 0)
    {
        s[i] = 'A';
        i--;
    }
    if(i == 0)
        OK = 0;
    else
        s[i] = 'B';
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char s[20];
		for(int i = 1;i <= n; i++)
			s[i] = 'A';
		while(OK)
        {
            in(n,s);
            nextAB(n,s);
        }
        OK = 1;
        cout<<endl;
	}
}


