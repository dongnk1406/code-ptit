//  Generate n-bit Gray codes
#include<bits/stdc++.h>
using namespace std;

void Gray(int n)
{

	vector<string> arr;

	// bat dau voi ma gray 1 bit;
	arr.push_back("0");
	arr.push_back("1");
	// moi vong lap tao ra 2*i ma nhi phan vi ta dua cac ma nhi phan o vecto cu vao vecto moi theo thu tu nguoc lai. tao ra
	// vecto moi co so luong phan tu gap doi vecto cu
	int i, j;
	for (i = 2; i <= pow(2,n-1); i = 2*i) 	//i chay tu 2 vi ma gray 2 bit sinh ra tu 1 ma 1bit,ma 3 bit sinh ra tu ma 2 bit,......
	{

		for (j = i-1 ; j >= 0 ; j--) //dua cac ma nhi phan o vecto cu vao vecto moi theo thu tu nguoc lai, tao thanh vecto moi co
			arr.push_back(arr[j]); //so luong phan tu gap doi phan tu vua vecto cu, nghia la vecto3=2*vecto2=2*2*vecto1

		// noi 0 vao nua dau
		for (j = 0 ; j < i ; j++)
			arr[j] = "0" + arr[j];

		// noi 1 vao nua sau
		for (j = i ; j < 2*i ; j++)
			arr[j] = "1" + arr[j];
	}

	for (i = 0 ; i < arr.size() ; i++ )
		cout << arr[i] << " ";
		cout<<endl;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		Gray(n);
	}
}

