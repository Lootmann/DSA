#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<string> origin(h);
  rep(i, h) cin >> origin[i];

  int r, c;
  cin >> r >> c;

  vector<string> pattern(r);
  rep(i, r) cin >> pattern[i];

  int row_max = h - r + 1;
  int col_max = w - c + 1;

  // O(N)
  rep(i, row_max) {
    // O(N)
    rep(j, col_max) {
      bool is_match = true;

      // O(N)
      rep(row, r) {
        // O(N) -> TLE
        rep(col, c) {
          if (origin[i + row][j + col] != pattern[row][col]) {
            is_match = false;
          }

          if (!is_match) {
            break;
          }
        }

      }  // rep row

      if (is_match) {
        cout << i << ' ' << j << '\n';
      }
    }
  }
}
