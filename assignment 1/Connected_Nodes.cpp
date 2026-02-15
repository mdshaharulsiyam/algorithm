#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, e;
  cin >> n >> e;
  vector<int> g[n];
  while (e--)
  {
    int x, y;
    cin >> x >> y;
    g[x].push_back(y);
    g[y].push_back(x);
  }
  int q;
  cin >> q;
  while (q--)
  {
    int x;
    cin >> x;
    if (g[x].size() == 0)
    {
      cout << "-1";
    }
    else
    {
      sort(g[x].begin(), g[x].end(), greater<int>());
      for (int val : g[x])
      {
        cout << val << " ";
      }
    }
    cout << "\n";
  }

  return 0;
}