#include <bits/stdc++.h>
using namespace std;

void bfs(int src, vector<int> g[], vector<bool> &vis, vector<int> &lvl, vector<int> &parent)
{
  queue<int> q;
  q.push(src);
  vis[src] = true;
  lvl[src] = 0;
  parent[src] = 0;
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
        lvl[x] = lvl[par] + 1;
        parent[x] = par;
      }
    }
  }
}

int main()
{
  int v, e;
  cin >> e >> v;
  vector<int> g[v];
  vector<bool> vis(v, false);
  vector<int> lvl(v, -1);
  vector<int> par(v, -1);
  while (e--)
  {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  int src = 1;
  bfs(src, g, vis, lvl, par);
  int path = 4;
  for (int i = 0; i < v; i++)
  {
    cout << i << " level-> " << lvl[i] << "\n";
  }
  vector<int> p;
  while (path != 1)
  {
    p.push_back(par[path]);
    path = par[path];
  }
  reverse(p.begin(), p.end());
  for (int x : p)
  {
    cout << x << "->";
  }
  return 0;
}