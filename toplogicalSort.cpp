
#include <bits/stdc++.h>
//��������
using namespace std;


vector<int> adj[10];
vector<int> result;
int in_degree[10];
int n;


void toplogical() {
    queue<int> q;
    //1-indexed
    for (int i = 1; i <= n; i++)
    {
        if (in_degree[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        for (int i : adj[cur])
        {
            in_degree[i]--;
            if (in_degree[i] == 0)
                q.push(i);
        }
            
    }
    //����Ŭ�� �ִ� ��� ť�� ���� �ʱ⶧���� result �迭�� ���Ե��� ����
    if (result.size() != n)
        cout << "cycle exists";
    else {
        for (auto x : result)cout << x << ' ';
    }
        
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   
  
}
