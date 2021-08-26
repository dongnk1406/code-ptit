// TÌM KIẾM NHỊ PHÂN
#include<bits/stdc++.h>
using namespace std;
long long n,k,a[1000005];

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=1;i<=n;i++)
			cin>>a[i];

		/* lower_bound(first, last, val): Trả về iterator trỏ đến phần tử đầu tiên trong [first, last)
        không nhỏ hơn val. Nếu tất cả các phần tử nhỏ hơn val, trả về last*/
		int tmp=lower_bound(a+1,a+n+1,k)-a; //Ham lower_bound tra ve dia chi nen phai tru di a
		//tmp luc nay la vi tri nho nhat ma k khong lon hon
		if(a[tmp]==k)
		{
			cout<<tmp<<endl;
		}
		else cout<<"NO"<<endl;

	}
}
