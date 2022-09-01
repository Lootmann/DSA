#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int x, l, r;
  cin >> x >> l >> r;

  int ans{0};
  int diff{100001};

  for (int i = l; i <= r; i++) {
    if (diff > abs(x - i)) {
      diff = abs(x - i);
      ans = i;
    }
  }

  cout << ans << '\n';
}

int main() {
  FastIO;
  solve();
}
