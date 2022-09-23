#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using llint = long long int;

template <class T>
void chmin(T& a, T b) {
  if (a > b) a = b;
}

int main() {
  int n;
  cin >> n;

  vector<llint> foot(n);
  for (auto& f : foot) cin >> f;

  vector<llint> dp(n + 1, 100000);
  dp[0] = 0;

  for (int i = 1; i < n; i++) {
    chmin(dp[i], abs(foot[i] - foot[i - 1]) + dp[i - 1]);

    if (i > 1) {
      llint diff2 = abs(foot[i] - foot[i - 2]) + dp[i - 2];
      chmin(dp[i], diff2);
    }
  }

  cout << "\n>>> dp" << '\n';
  for (size_t i = 0; i < dp.size() - 1; i++) {
    cout << dp.at(i) << '\n';
  }

  cout << "ans = " << dp[n - 1] << '\n';
}
