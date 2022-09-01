#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

int unique_value(int v1, int v2, int v3) {
  int x;
  if (v1 == v2)
    x = v3;
  else if (v2 == v3)
    x = v1;
  else
    x = v2;
  return x;
}

void solve() {
  vector<pair<int, int>> vpi;

  for (int i = 0; i < 3; i++) {
    int x, y;
    cin >> x >> y;

    vpi.emplace_back(make_pair(x, y));
  }

  int x = unique_value(vpi[0].first, vpi[1].first, vpi[2].first);
  int y = unique_value(vpi[0].second, vpi[1].second, vpi[2].second);

  cout << x << ' ' << y << '\n';
}

int main() {
  FastIO;
  solve();
}
