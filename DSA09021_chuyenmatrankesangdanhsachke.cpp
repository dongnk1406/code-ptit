// DSA09021 - CHUYỂN MA TRẬN KỀ SANG DANH SÁCH KỀ
#include<bits/stdc++.h>
using namespace std;

int a[1000][1000];

main(){
    int n;
	cin >> n;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
         	cin >> a[i][j];
		}
	}
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
		 	if(a[i][j])
			 	cout << j << " ";
		}
		 cout << endl;
	}

	return 0;
}
