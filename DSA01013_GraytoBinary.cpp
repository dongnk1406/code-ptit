// Gray to binary
#include <bits/stdc++.h>
using namespace std;
string GraytoBinary(string g)
{
	string b="";
	b+=g[0];
	for(int i=1;i<g.length();i++)
    {
        if(b[i-1]==g[i])
            b += '0';
        else
            b += '1';
    }
	return b;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string g;
		cin>>g;
		cout<<GraytoBinary(g)<<endl;
	}
	return 0;
}
