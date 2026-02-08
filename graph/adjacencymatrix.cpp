#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, e;
  cin >> n >> e;
  int mat[e][e];
  memset(mat, 0, sizeof(mat));
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    mat[a][b] = 1;
    mat[b][a] = 1;
  }
  for (int i = 0; i < e; i++)
  {
    for (int j = 0; j < e; j++)
    {
      cout << mat[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}
