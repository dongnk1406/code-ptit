// InsertionSort

#include<bits/stdc++.h>
using namespace std;

void in(int n, int a[])
{
    for(int i = 0; i < n; i++)
        cout << " " << a[i];
    cout << endl;
}

void InsertionSort(int n, int a[])
{
    int i,j,k;
	for(i = 0; i<n ;i++)
	{
		j = i-1; k = a[i];
		while(a[j]>k && j>=0)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = k;
		cout << "Buoc " << i << ":";
		in(i+1,a);
	}

}
main()
{
    int n, a[150];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    InsertionSort(n, a);
}

