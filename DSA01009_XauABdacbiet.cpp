#include <bits/stdc++.h>
using namespace std;
int n,k,T;
string s; //Chuoi co k ki tu A
vector<string> arr; //Luu cac chuoi de xs theo thu tu tu dien
int a[100]; // Luu chuoi co n-k phan tu
//Sinh nhi phan co n-k bit
void Try(int i)
{
  for(int j=0;j<=1;j++)
  {
  	a[i]=j;
  	if(i==n-k)
  	{
  		for(int l=1;l<=n-k;l++)
  		{
  			if(l==1&&a[l]==1) //Them vao dau neu dau mang la B
  			{
  				string temp=s;
  				for(int p=1;p<=n-k;p++)
  				{
  					if(a[p]==0)
  						temp+="A";
  					else
  						temp+="B";
                }
                arr.push_back(temp);
			}
			if((l==n-k)&&a[n-k]==1) // Them vao cuoi neu cuoi cuoi mang la B
  			{
  				string temp="";
  				for(int p=1;p<=n-k;p++)
  				{
  					if(a[p]==0)
  						temp+="A";
  					else
  						temp+="B";
                }
                temp+=s;
                arr.push_back(temp);
			}
			if((a[l]==1)&&(a[l-1]==1)&&l>1) //Them vao giua neu 2 ben deu la B
  			{
  				string temp="";
  				for(int p=1;p<=n-k;p++)
  				{
  					if(p==l)
  						temp+=s;
  					if(a[p]==0)
  						temp+="A";
  					else
  						temp+="B";
				  }
				  arr.push_back(temp);
			  }
		  }
  	}
     else
     	Try(i+1);
  }
}


int main()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++)
		s+="A";
	Try(1);
	sort(arr.begin(),arr.end());
	cout<< arr.size() <<'\n';
	for(int i=0;i<arr.size();i++)
		cout<<arr[i]<<'\n';
}
