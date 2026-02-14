#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  vector<vector<int>> g(n);

  while (m--)
  {
    int x, y;
    cin >> x >> y;
    g[x].push_back(y);
  }

  int q;
  cin >> q;

  while (q--)
  {
    int u, v;
    cin >> u >> v;
    bool found = false;
    if (u == v)
    {
      found = true;
    }
    else
    {
      for (int x : g[u])
      {
        if (x == v)
        {
          found = true;

          break;
        }
      }
    }
    if (found)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}
