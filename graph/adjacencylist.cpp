#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, e;
  cin >> n >> e;
  vector<int> mat[e];
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    mat[a].push_back(b);
    mat[b].push_back(a);
  }
  for (int i = 0; i < e; i++)
  {
    cout << i << " -> ";
    for (int elem : mat[i])
    {
      cout << elem << ",";
    }
    cout << "\n";
  }
  return 0;
}
