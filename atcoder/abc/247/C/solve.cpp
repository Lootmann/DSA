#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n;
  cin >> n;

  string ans{"1"};
  for (int i = 2; i <= n; i++) {
    ans = ans + " " + to_string(i) + " " + ans;
  }

  cout << ans << '\n';
}

int main() {
  FastIO;
  solve();
}
