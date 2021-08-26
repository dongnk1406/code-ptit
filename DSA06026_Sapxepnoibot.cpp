// bubble sort

#include<bits/stdc++.h>
using namespace std;

void in(int n, int a[])
{
    for(int i = 0; i < n; i++)
        cout << " " << a[i];
    cout << endl;
}

void bubblesort(int n, int a[])
{
    for(int i = 0; i < n-1 ; i++)
	{
		int check = 1;
		for(int j=0; j < n-i-1; j++)
			if(a[j] > a[j+1])
			{
				swap(a[j], a[j+1]);
				check = 0;
			}
		if(check == 1) break;
		cout << "Buoc " << i+1 << ":";
		in(n,a);
	}
}
main()
{
    int n, a[150];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    bubblesort(n, a);
}


