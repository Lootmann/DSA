#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;

  if (x <= a) {
    cout << "1.000000000000" << '\n';
    return;
  } else if (x <= b) {
    cout << fixed << setprecision(12) << (c / static_cast<double>(b - a)) << endl;
  } else {
    cout << "0.000000000000" << '\n';
  }
}

int main() {
  FastIO;
  solve();
}
