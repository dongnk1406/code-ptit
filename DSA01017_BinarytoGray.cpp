// binary to gray
#include<bits/stdc++.h>
using namespace std;
char xor_c(char a,char b)
{
	return (a==b)? '0':'1';
}
string BinarytoGray(string b)
{
	string gray="";
	gray += b[0];

	for(int i=1;i<b.length();i++)
    {
        if(b[i-1] == b[i])
            gray += '0';
        else
            gray += '1';
    }
	return gray;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string b;
		cin>>b;
		cout<<BinarytoGray(b)<<endl;
	}
	return 0;
}
