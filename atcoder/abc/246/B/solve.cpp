#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  // HERE COMES A PAIN
  double a, b;
  cin >> a >> b;

  double c = sqrt(a * a + b * b);
  double theta = acos(b / c);
  cout << fixed << setprecision(7) << sin(theta) << ' ' << cos(theta) << '\n';
}

int main() {
  FastIO;
  solve();
}
