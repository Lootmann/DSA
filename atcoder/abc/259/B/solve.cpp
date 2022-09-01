#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  double x, y, d;
  cin >> x >> y >> d;

  double theta = d * M_PI / 180;
  double x1 = x * cos(theta) - y * sin(theta);
  double y1 = x * sin(theta) + y * cos(theta);

  cout << fixed << setprecision(7) << x1 << ' ' << y1 << '\n';
}

int main() {
  FastIO;
  solve();
}
