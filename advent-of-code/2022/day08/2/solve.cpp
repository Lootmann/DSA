#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
using namespace std;

vector<string> getInput() {
  vector<string> vs;
  string line;
  while (cin >> line) {
    vs.emplace_back(line);
  }
  return vs;
}

bool isEdge(vector<string> const &grid, int y, int x) {
  return y == 0 || x == 0 || y == (int)grid.size() - 1 ||
         x == (int)grid[0].size() - 1;
}

int calcDist(vector<string> const &grid, int y, int x) {
  auto height = grid[y][x];
  int up_dist{0}, left_dist{0}, down_dist{0}, right_dist{0};

  // up
  for (int yy = y - 1; yy >= 0; --yy) {
    up_dist = abs(yy - y);
    if (height <= grid[yy][x]) break;
  }

  // left
  for (int xx = x - 1; xx >= 0; --xx) {
    left_dist = abs(xx - x);
    if (height <= grid[y][xx]) break;
  }

  // down
  for (int yy = y + 1; yy < (int)grid.size(); ++yy) {
    down_dist = abs(yy - y);
    if (height <= grid[yy][x]) break;
  }

  // right
  for (int xx = x + 1; xx < (int)grid[0].size(); ++xx) {
    right_dist = abs(xx - x);
    if (height <= grid[y][xx]) break;
  }

  return up_dist * left_dist * down_dist * right_dist;
}

void solve() {
  vector<string> grid = getInput();
  int ans{0};

  for (int y = 0; y < (int)grid.size(); ++y) {
    for (int x = 0; x < (int)grid[0].size(); ++x) {
      // edge has at least one zero dist.
      if (isEdge(grid, y, x)) {
        continue;
      }

      ans = max(ans, calcDist(grid, y, x));
    }
  }

  cout << "ans = " << ans << '\n';
}

int main() {
  FastIO;
  solve();
}
