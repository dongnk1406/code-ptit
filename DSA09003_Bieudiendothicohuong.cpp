// DSA09003 - BIỂU DIỄN ĐỒ THỊ CÓ HƯỚNG.

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int V, E;
		cin >> V >> E;
		vector<int> k[V+1];		// chuyen tu danh sach canh sang danh sach ke

		for(int i = 0 ; i < E ; i++)
		{
			int a, b;
			cin >> a >> b;  // dinh a den -> dinh b(do thi co huong)
			k[a].push_back(b);
		}

		for(int i = 1 ; i < V ; i++)		// <=> i <= V
			sort(k[i].begin(), k[i].end());	// sap xep lai ds ke theo thu tu tu be den lon

		for(int i = 1 ; i <= V ; i++)
		{
			cout << i << ":";	// in dinh cua ds ke
			for(int j = 0 ; j < k[i].size() ; j++)
				cout << " " << k[i][j];		// in dinh ke voi dinh cua i

			cout << endl;
		}
	}
	return 0;
}

