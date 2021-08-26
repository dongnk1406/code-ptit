// CHỌN SỐ TỪ MA TRẬN VUÔNG CẤP N
#include<bits/stdc++.h>
using namespace std;
int n, k, hv[20], c[20][20], danhdau[20];
/*  hv[20]: mang chua cac phan tu hoan vi tu 1 den n  ;
    C[20][20]: ma tran vuong cap n
    danhdau[20]: mang danhdau duoc khoi tao bang true het
*/
vector<int> arr; // Mang nay de luu tru gia tri doi voi moi cach => dem duoc so cach

void in()
{
    int tong = 0;
    for(int i = 1; i<= n; i++)
        tong += c[i][hv[i]];

    if(tong == k)
        for(int i = 1; i <= n; i++)
            arr.push_back(hv[i]);
}

void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(danhdau[j] == false)
		{
			hv[i] = j;
			danhdau[j] = true;
			// khi da sinh duoc 1 hoan vi n phan tu
			if(i == n)
                in();
			else
				Try(i+1);
			danhdau[j] = false;
		}
	}
}

main()
{
    cin>>n>>k;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>c[i][j];

	// thuc hien sinh hoan vi
	Try(1);
	//in ra so cach chon, chia cho n vi moi cach thi vector lai co n so
	cout<< arr.size()/n;

	for(int i=0;i<arr.size();i++)   //Nho la for tu 0-> nho hon Arr.size()
	{
		if(i%n == 0)
		{
			cout<<'\n';
		}
		cout<<arr[i]<<' ';
	}

}
