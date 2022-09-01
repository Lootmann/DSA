#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

int agcd(int n, int m) {
  int ans{0}, idx{1};

  int maxv = max(n, m);
  while (maxv >= idx) {
    if (n % idx == 0 && m % idx == 0) {
      ans = max(ans, idx);
    }
    idx++;
  }

  return ans;
}

void solve() {
  int a, b;

  while (cin >> a >> b) {
    cout << agcd(a, b) << '\n';
  }
}

int main() {
  FastIO;
  solve();
}
