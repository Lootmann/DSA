#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

struct Pos {
  int y, x;

  Pos(int _y, int _x) : y{_y}, x{_x} {}
};

int dist(const Pos p1, const Pos p2) {
  return abs(p1.x - p2.x) + abs(p1.y - p2.y);
}

void solve() {
  int h, w;
  cin >> h >> w;

  vector<string> s(h);
  rep(i, h) cin >> s[i];

  vector<Pos> pos;

  rep(y, h) rep(x, w) {
    if (s.at(y).at(x) == 'o') {
      pos.emplace_back(Pos{y, x});
    }
  }

  cout << dist(pos[0], pos[1]) << '\n';
}

int main() {
  FastIO;
  solve();
}
