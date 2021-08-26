// DSA09004 - DFS TRÊN ĐỒ THỊ VÔ HƯỚNG
#include<bits/stdc++.h>
using namespace std;

int V, E, a; 			//tap dinh va tap canh cua do thi
vector<vector<int> > ke;//danh sach ke cua do thi
bool chuaxet[1005];		//ghi nhan trang thai chua xet cu dinh


void DFS(int u)			//thuat toan DFS stack
{
	stack <int> stk;
	stk.push(u);
	chuaxet[u] = false;
	cout << u << " ";
	while(!stk.empty())
	{
		int s = stk.top();
		stk.pop();
		for(int i = 0 ; i < ke[s].size() ; i++)
		{
			if(chuaxet[ke[s][i]])
			{
				cout << ke[s][i] << " ";
				chuaxet[ke[s][i]] = false;
				stk.push(s);
				stk.push(ke[s][i]);
				break;
			}
		}
	}

}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ke.clear();
		cin >> V >> E >> a;		//doc so dinh va so canh cua do thi
								//a la dinh bat dau chay
		ke.resize(V+1);
		memset(chuaxet, true, sizeof chuaxet);

		for(int i = 1 ; i <= E ; i++)
		{
			int u, v;			//u, v la dinh dau,dinh cuoi cua canh
			cin >> u >> v;
			ke[u].push_back(v);	//them v vao ke(u)
			ke[v].push_back(u);	//them u vao ke(v)
		}
		DFS(a);
		cout << endl;
	}
	return 0;
}

