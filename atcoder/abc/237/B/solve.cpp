#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<int>> A(h, vector<int>(w));

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      int num;
      cin >> num;
      A[i][j] = num;
    }
  }

  for (int x = 0; x < w; x++) {
    for (int y = 0; y < h; y++) {
      cout << A[y][x];
      if (y != h - 1) cout << ' ';
    }
    cout << '\n';
  }
}
