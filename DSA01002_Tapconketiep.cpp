// tổ hợp kế tiếp

#include<bits/stdc++.h>
using namespace std;

void in();
void next_combination(int n,int k,int c[])
{
	int i=k;
	// xét để tìm phần tử chưa đạt giới hạn trên, nghia la tim phan tu khac n-k+i
	while(i > 0 && c[i]==n-k+i)
		i--;
	// nếu chưa phải tập con cuối
	if(i>0)
	{
	    // tăng phần tử giới hạn trên thêm 1
		c[i]=c[i]+1;
		// gán tất cả phần tử từ i+1 tới k bằng số phía trước cộng 1
		for(int j=i+1;j<=k;j++)
			c[j]=c[j-1]+1;
	}
	else
		for(int i=1; i<=k; i++)
			c[i] = i;

	for(int i=1;i<=k;i++)
        cout<<c[i]<<" ";
    cout<<endl;
}

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int c[k + 1];
		for(int i=1;i<=k;i++)
			cin>>c[i];
		next_combination(n,k,c);
	}
}

