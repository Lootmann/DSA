#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template <class T>
void chmin(T& a, T b) {
  if (a > b) a = b;
}

const long long int MAX = 1LL << 40;

int main() {
  FastIO;

  int n;
  cin >> n;

  vector<long long int> heights(n);
  for (auto& height : heights) cin >> height;

  vector<long long int> dp(n + 1, MAX);
  dp[0] = 0;

  for (size_t i = 1; i < heights.size(); ++i) {
    chmin(dp[i], dp[i - 1] + abs(heights[i] - heights[i - 1]));

    if (i > 1) {
      chmin(dp[i], dp[i - 2] + abs(heights[i] - heights[i - 2]));
    }
  }

  for (size_t i = 0; i < dp.size(); i++) {
    cout << i << ' ' << dp[i] << '\n';
  }
}
