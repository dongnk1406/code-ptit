// Di chuyển mê cung 2
#include<iostream>
using namespace std;
int n,a[10][10],danhdau[10][10],i,j,k;	// bien k de luu tru phan tu xau s
char s[100];
bool check;
void in(int k)
{
	for(i=0;i<k;i++)
		cout<<s[i];
	cout<<" ";
}

void dequy(int i,int j,int k)
{
	if(i==n-1 && j==n-1)
	{
		in(k);
		check=0;
		return;
	}
	if(i+1<n && a[i+1][j]==1 && danhdau[i+1][j]==false)
    {
        s[k]='D';
        danhdau[i][j] = true;
        dequy(i+1,j,k+1);
        danhdau[i][j] = false;
    }
    if(j-1>=0 && a[i][j-1]==1 && danhdau[i][j-1]==false)
    {

        s[k]='L';
        danhdau[i][j] = true;
        dequy(i,j-1,k+1);
        danhdau[i][j] = false;
    }
    if(j+1<n && a[i][j+1]==1 && danhdau[i][j+1]== false)
    {
        s[k]='R';
        danhdau[i][j] = true;
        dequy(i,j+1,k+1);
          danhdau[i][j] = false;
    }
    if(i-1>=0 && a[i-1][j]==1 && danhdau[i-1][j]==false)
    {
    	s[k]='U';
        danhdau[i][j] = true;
        dequy(i-1,j,k+1);
        danhdau[i][j] = false;
    }
}
main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n;
		for( i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				cin>>a[i][j];
				danhdau[i][j]=false;
			}
      	check=1;
		if(a[0][0]==0 || a[n-1][n-1]==0)	cout<<"-1"<<endl;
		else
        {
            dequy(0,0,0);
            if(check)    cout<<"-1";
        }
        cout<<endl;
	}
}
