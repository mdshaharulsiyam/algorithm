#include <bits/stdc++.h>
using namespace std;

int n, e;

vector<vector<char>> arr;
vector<vector<bool>> vis;

vector<pair<int, int>> moves = {
    {0, -1}, {-1, 0}, {0, 1}, {1, 0}};

bool valid(int i, int j)
{
  if (i < 0 || i >= n || j < 0 || j >= e)
    return false;

  return true;
}

int dfs(int i, int j)
{
  vis[i][j] = true;

  int cnt = 1; // count this room

  for (int k = 0; k < 4; k++)
  {
    int si = i + moves[k].first;
    int sj = j + moves[k].second;

    if (valid(si, sj) && !vis[si][sj] && arr[si][sj] == '.')
    {
      cnt += dfs(si, sj);
    }
  }

  return cnt;
}

int main()
{
  cin >> n >> e;

  arr.resize(n, vector<char>(e));
  vis.resize(n, vector<bool>(e, false));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < e; j++)
    {
      cin >> arr[i][j];
    }
  }

  vector<int> ans;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < e; j++)
    {
      if (arr[i][j] == '.' && !vis[i][j])
      {
        int size = dfs(i, j);
        ans.push_back(size);
      }
    }
  }

  if (ans.empty())
  {
    cout << 0 << endl;
  }
  else
  {
    sort(ans.begin(), ans.end());

    for (int x : ans)
      cout << x << " ";

    cout << endl;
  }

  return 0;
}