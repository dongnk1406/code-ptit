// DSA09020 - CHUYỂN DANH SÁCH KỀ SANG MA TRẬN KỀ
#include<bits/stdc++.h>
using namespace std;

int a[1001][1001]={0};

int main(){
    int n,j;
    cin >> n;
    cin.ignore();

    for(int i = 1; i <= n; i++){
       	string s;
		getline(cin,s);
       	istringstream s_cin(s);
       	while(s_cin>>j)
		   	a[i][j]=1;
	}

	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
