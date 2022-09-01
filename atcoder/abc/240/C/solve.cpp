#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n, x;
  cin >> n >> x;

  vector<int> A(n), B(n);

  rep(i, n) {
    cin >> A[i] >> B[i];
  }

  vector<vector<bool>> dp(n + 1, vector<bool>(x + 1, false));
  dp[0][0] = true;

  rep(i, n) rep(j, x + 1) {
    if (dp[i][j]) {
      if (j + A[i] <= x) {
        dp[i + 1][j + A[i]] = true;
      }

      if (j + B[i] <= x) {
        dp[i + 1][j + B[i]] = true;
      }
    }
  }

  if (dp[n][x]) {
    cout << "Yes" << '\n';
  } else {
    cout << "No" << '\n';
  }
}

int main() {
  FastIO;
  solve();
}
