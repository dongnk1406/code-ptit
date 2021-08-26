// đổi chỗ trực tiếp

#include<iostream>
using namespace std;
int n, a[150];

void in(int n, int a[])
{
    for(int i = 0; i < n; i++)
        cout << a[i] <<" ";
    cout<<endl;
}
void interchangesort(int n, int a[])
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i+1; j < n; j++)
            if(a[i] > a[j])
            {
                a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
            }
        cout << "Buoc "<< i + 1 <<": ";
        in(n, a);
    }
}
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    interchangesort(n,a);
}
