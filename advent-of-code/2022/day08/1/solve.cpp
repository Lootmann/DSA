#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
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
  return (y == 0 || x == 0 || y == (int)grid.size() - 1 ||
          x == (int)grid[0].size() - 1);
}

bool isVisible(vector<string> const &grid, int y, int x) {
  auto height = grid[y][x];
  bool is_visible{true};

  // to top
  for (auto yy = y - 1; yy >= 0; --yy) {
    if (height <= grid[yy][x]) {
      is_visible = false;
    }
  }
  if (is_visible) return true;

  // to bottom
  is_visible = true;
  for (auto yy = y + 1; yy < (int)grid.size(); ++yy) {
    if (height <= grid[yy][x]) {
      is_visible = false;
    }
  }
  if (is_visible) return true;

  // to right
  is_visible = true;
  for (auto xx = x + 1; xx < (int)grid[0].size(); ++xx) {
    if (height <= grid[y][xx]) {
      is_visible = false;
    }
  }
  if (is_visible) return true;

  // to left
  is_visible = true;
  for (auto xx = x - 1; xx >= 0; --xx) {
    if (height <= grid[y][xx]) {
      is_visible = false;
    }
  }
  if (is_visible) return true;

  return is_visible;
}

void solve() {
  vector<string> grid = getInput();

  int ans = 0;

  int height = (int)grid.size();
  int width = (int)grid[0].size();

  for (int y = 0; y < height; ++y) {
    for (int x = 0; x < width; ++x) {
      if (isEdge(grid, y, x)) {
        ans++;
        continue;
      }

      if (isVisible(grid, y, x)) {
        ans++;
      }
    }
  }

  cout << ans << '\n';
}

int main() {
  FastIO;
  solve();
}
