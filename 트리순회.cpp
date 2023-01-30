#include<bits/stdc++.h>

using namespace std;
vector<int> adj[10];
int p[10];
int depth[10];

//bfs ����� Ʈ���� �θ�� �� ����� depth ���ϱ�
void getTreeDepth(int root)
{
	queue<int>q;
	q.push(root);
	while (!q.empty()) {
		int cur = q.front(); q.pop();
		cout << cur << ' ';
		for (int nxt : adj[cur])
		{
			if (p[cur] == nxt)continue;
			q.push(nxt);
			p[nxt] = cur;
			depth[nxt] = depth[cur] + 1;
		}
	}
}

// ��� dfs Ʈ���� �θ�� �� ����� depth ���ϱ�
void dfs(int root)
{
	for (int nxt : adj[root]) {
		if (p[root] == nxt)continue;
		p[nxt] = root;
		depth[nxt] = depth[root] + 1;
		dfs(nxt);
	}
}

int lc[9] = { 0,2,4,6,0,0,0,0,0 };
int rc[9] = { 0,3,5,7,0,8,0,0,0 };
//���� ��ȸ bfs���
void level_order_bfs() {
	queue<int>q;
	q.push(1);
	while (!q.empty()) {
		int cur = q.front(); q.pop();
		cout << cur << ' ';
		if (lc[cur])q.push(lc[cur]);
		if (rc[cur])q.push(rc[cur]);
	}
}

    

 int main() {
	 ios::sync_with_stdio(0);
	 cin.tie(0);
	
	
	
	 
	 return 0;
}