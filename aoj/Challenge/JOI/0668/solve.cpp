#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  vector<int> B(m);
  for (int i = 0; i < n; i++) {
    B[A[i] - 1]++;
  }

  int ans{0};
  for (const int b : B) {
    ans = max(ans, b);
  }
  cout << ans << '\n';
}

int main() {
  FastIO;
  solve();
}
