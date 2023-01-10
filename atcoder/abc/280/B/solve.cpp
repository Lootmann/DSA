#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define llint long long int
using namespace std;

int main() {
  FastIO;
  int n;
  cin >> n;

  vector<int> S(n);
  for (auto &s : S) cin >> s;

  // accumulate sum
  vector<llint> ans(n, 0), acc(n, 0);
  ans[0] = acc[0] = S[0];

  for (size_t i = 1; i < S.size(); ++i) {
    acc[i] += S[i];
    ans[i] = acc[i] - acc[i - 1];
  }

  for (size_t i = 0; i < ans.size(); ++i) {
    cout << ans[i] << (i != ans.size() - 1 ? ' ' : '\n');
  }
}
