#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
using namespace std;

// convert row to col
vector<string> get_input(int h, int w) {
  vector<string> tmp(h);
  for (auto &t : tmp) cin >> t;

  vector<string> col(w);
  for (int x = 0; x < w; ++x) {
    string c{};
    for (int y = 0; y < h; ++y) {
      c.push_back(tmp[y][x]);
    }
    col[x] = c;
  }

  return col;
}

int main() {
  FastIO;
  int h, w;
  cin >> h >> w;

  auto s = get_input(h, w);
  auto t = get_input(h, w);

  sort(s.begin(), s.end());
  sort(t.begin(), t.end());

  if (s == t) {
    cout << "Yes" << '\n';
  } else {
    cout << "No" << '\n';
  }
}
