#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  FastIO;

  int ans = 0;
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  // freeze
  if (a < 0) {
    ans += c * abs(a);
    ans += d;
    ans += b * e;
  } else if (a == 0) {
    ans += d;
  } else {
    ans += (b - a) * e;
  }

  cout << ans << '\n';
}
