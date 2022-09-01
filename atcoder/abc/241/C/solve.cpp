#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<string> field(n);
  for (auto &line : field) cin >> line;

  int width = n;
  int height = (int)field.size();

  // horiozntal
  for (int row = 0; row < height; row++) {
    for (int col = 0; col <= width - 6; col++) {
      string line = field[row].substr(col, 6);
      if (count(line.begin(), line.end(), '#') >= 4) {
        cout << "Yes" << '\n';
        return;
      }
    }
  }

  // vertical
  for (int col = 0; col < width; col++) {
    for (int row = 0; row <= height - 6; row++) {
      string line{};
      for (int i = 0; i < 6; i++) {
        line += field[row + i][col];
      }
      if (count(line.begin(), line.end(), '#') >= 4) {
        cout << "Yes" << '\n';
        return;
      }
    }
  }

  // diagonal
  // left-top to bottom-right
  for (int row = 0; row <= height - 6; row++) {
    for (int col = 0; col <= width - 6; col++) {
      string line{};
      for (int i = 0; i < 6; i++) {
        line += field[row + i][col + i];
      }

      if (count(line.begin(), line.end(), '#') >= 4) {
        cout << "Yes" << '\n';
        return;
      }
    }
  }

  for (int row = height - 1; row >= 5; row--) {
    for (int col = 0; col <= width - 6; col++) {
      string line{};

      for (int i = 0; i < 6; i++) {
        line += field.at(row - i).at(col + i);
      }

      if (count(line.begin(), line.end(), '#') >= 4) {
        cout << "Yes" << '\n';
        return;
      }
    }
  }

  cout << "No" << '\n';
}

int main() {
  FastIO;
  solve();
}
