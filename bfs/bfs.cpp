#include <bits/stdc++.h>
using namespace std;

void bfs(int src, vector<int> g[], vector<bool> &vis)
{
  queue<int> q;
  q.push(src);
  vis[src] = true;
  while (!q.empty())
  {
    int par = q.front();
    cout << par << "\n";
    q.pop();
    for (int x : g[par])
    {
      if (vis[x] == false)
      {
        q.push(x);
        vis[x] = true;
      }
    }
  }
}

int main()
{
  int e, v;
  cin >> e >> v;
  vector<int> g[v];
  vector<bool> vis(v, false);

  while (e--)
  {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  int src = 1;
  bfs(src, g, vis);
  return 0;
}