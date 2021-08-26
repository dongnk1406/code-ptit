// hoán vị kế tiếp

#include<bits/stdc++.h>
using namespace std;

void in(int n, int c[])
{
    for(int i = 1; i <= n; i++)
        cout << c[i] << " ";
    cout<<endl;
}
void next_permutation(int n,int c[])
{
	int i = n - 1;
	//tim vi tri i sao cho c[i] < c[i+1]
	while(i > 0 && c[i] > c[i + 1])
		i--;
	// nếu chưa phải hoán vị cuối
	if(i > 0)
	{
	    //tim tu cuoi len vi tri k dau tien sao cho  c[j] > c[i]
		int j = n;
		while(c[i] > c[j])
            j--;
        // sau khi tim duoc vi tri c[j] dau tien lon hon c[i]
        swap(c[i], c[j]);
        // doi cho doan tu i+1 toi n
        int m = i + 1, p = n;
        while(m < p)
            swap(c[m], c[p]);

    }
    else
    {
		for (int i = 1; i <= n; i++)
			c[i] = i;
    }
    in(n,c);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int c[1234];
		for(int i = 1;i <= n; i++)
			cin>>c[i];
		next_permutation(n,c);
	}
}

