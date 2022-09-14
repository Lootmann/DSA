#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;
using vvi = vector<vector<int>>;
using vvb = vector<vector<bool>>;

int HEIGHT;
int WIDTH;

vvi get_maps() {
  vvi maps;
  string line;

  while (cin >> line) {
    vector<int> lines;

    for (size_t i = 0; i < line.size(); i++) {
      lines.emplace_back(line[i] - '0');
    }
    maps.emplace_back(lines);
  }

  return maps;
}

void dfs(int r, int w, vvi &maps, vvb &visited, int &sum) {
  int dy[] = {0, 1, -1, 0};
  int dx[] = {-1, 0, 0, 1};

  rep(i, 4) {
    int row = r + dy[i];
    int col = w + dx[i];

    if ((0 <= row && row < HEIGHT) && (0 <= col && col < WIDTH)) {
      if (!visited[row][col] && maps[row][col] != 9) {
        visited[row][col] = true;
        sum++;
        dfs(row, col, maps, visited, sum);
      }
    }
  }
}

int main() {
  vvi maps = get_maps();

  HEIGHT = (int)maps.size();
  WIDTH = (int)maps.front().size();

  vvb visited(HEIGHT, vector<bool>(WIDTH, false));
  vector<int> sizes;

  for (int h = 0; h < HEIGHT; h++) {
    for (int w = 0; w < WIDTH; w++) {
      if (not visited[h][w] and maps[h][w] != 9) {
        // current position
        visited[h][w] = true;

        int sum{1};  // for current position +1
        dfs(h, w, maps, visited, sum);

        sizes.emplace_back(sum);
      }
    }
  }

  sort(sizes.begin(), sizes.end(), greater<int>());

  int ans = {1};
  for (size_t i = 0; i < 3; i++) {
    ans *= sizes[i];
  }

  cout << ans << '\n';
}
