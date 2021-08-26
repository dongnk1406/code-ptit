// SẮP XẾP QUÂN HẬU 1
#include<bits/stdc++.h>
using namespace std;

int hang[10],cot[10],cheonguoc[30],cheoxuoi[30], dem, n;

void Try(int i)//hang i
{
	for(int j=1;j<=n;j++)
	{
	    // ban dau khoi tao hang[j] = cot[j] = cheonguoc[i+j-1] = cheoxuoi[i-j+n] = flase
		if(!hang[j] && !cot[j] && !cheonguoc[i+j-1] && !cheoxuoi[i-j+n])
		{
			hang[j] = cot[j] = cheonguoc[i+j-1] = cheoxuoi[i-j+n] = true;
			if(i == n)
				dem++;
			else
                Try(i+1);
			hang[j] = cot[j] = cheonguoc[i+j-1] = cheoxuoi[i-j+n] = false;
		}
	}
}

main()
{
    int t;
    cin >> t;
    while(t--)
    {
        dem = 0;
        cin >> n;
        Try(1);
        cout << dem << endl;
    }
}
