#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  string line;
  vector<vector<int>> maps;

  while (cin >> line) {
    vector<int> lines;

    for (size_t i = 0; i < line.size(); i++) {
      lines.emplace_back(line[i] - '0');
    }
    maps.emplace_back(lines);
  }

  int count{0};

  int height = (int)maps.size();
  int width = (int)maps.front().size();

  int dy[4] = {0, 1, -1, 0}, dx[4] = {-1, 0, 0, 1};

  rep(row, height) {
    rep(col, width) {
      int current = maps[row][col];
      bool is_lowerst = true;

      rep(i, 4) {
        int r = row + dy[i];
        int c = col + dx[i];

        if ((0 <= r && r < height) && (0 <= c && c < width)) {
          if (current >= maps[r][c]) {
            is_lowerst = false;
          }
        }
      }

      if (is_lowerst) {
        count += (current + 1);
      }
    }
  }

  cout << count << '\n';
}
