#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve(int n) {
  vector<long long int> score(n);
  for (auto &s : score) cin >> s;

  long long int diff = LLONG_MAX;

  for (int bit = 0; bit < (1 << n); bit++) {
    long long int a = 0, b = 0;

    for (int i = 0; i < n; i++) {
      if (bit & (1 << i)) {
        a += score[i];
      } else {
        b += score[i];
      }
    }
    diff = min(diff, abs(a - b));
  }
  cout << diff << '\n';
}

int main() {
  FastIO;

  int t;
  while (cin >> t) {
    if (t == 0) break;
    solve(t);
  }
}
