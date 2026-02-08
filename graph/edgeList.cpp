#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, e;
  cin >> n >> e;
  vector<pair<int, int>> mat;
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    mat.push_back({a, b});
  }
  for (auto p : mat)
  {
    cout << p.first << " " << p.second << "\n";
  }

  return 0;
}
