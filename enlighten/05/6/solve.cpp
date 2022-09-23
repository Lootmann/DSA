#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using llint = long long int;

template <class T>
void chmin(T &a, T b) {
  if (a > b) a = b;
}

const llint MAX = 1e9;

llint rec(int i, vector<llint> &h, vector<llint> &dp) {
  if (dp[i] < MAX) return dp[i];

  if (i == 0) return 0;

  llint res = MAX;
  chmin(res, rec(i - 1, h, dp) + abs(h[i] - h[i - 1]));
  if (i > 1) chmin(res, rec(i - 2, h, dp) + abs(h[i] - h[i - 2]));

  return dp[i] = res;
}

int main() {
  int n;
  cin >> n;

  vector<llint> h(n, 0), dp(n + 1, MAX);
  for (auto &hh : h) cin >> hh;

  cout << rec(n - 1, h, dp) << '\n';
}
