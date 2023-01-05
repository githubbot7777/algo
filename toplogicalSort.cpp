
#include <bits/stdc++.h>
//위상정렬
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
    //사이클이 있는 경우 큐에 들어가지 않기때문에 result 배열에 포함되지 않음
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
