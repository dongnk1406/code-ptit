// Tổng dãy con bằng K

#include<iostream>
#include<algorithm>
using namespace std;
int n,k,a[20],np[20],check,sum,dem = 0;
void result()
{
    sum=0;
	for(int i=1;i<=n;i++)
        sum=sum+a[i]*np[i];     //tich chap voi mang sinh nhi phan, ket qua se con ở vị trí np[i]=1;
    if(sum==k)
    {
        check=0;
        for(int i=1;i<=n;i++)
            if(np[i]==1)     // giu lai mang a[i] tai vi tri np[1]=1
                cout<< a[i] <<" ";
        cout<<"\n";
        dem++;
    }
}
// sinh nhi phan tao ra cac mang chua ket qua
void nhiphan(int i)
{
    for(int j=0;j<=1;j++)
    {
        np[i]=j;
        if(i==n)
            result();
        else
            nhiphan(i+1);
    }
}
main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    check=1;
    nhiphan(1);
    cout << dem;
    if(check == 1) cout << -1;
    cout << endl;
}
