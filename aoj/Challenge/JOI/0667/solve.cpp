#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n, a, b;
  cin >> n >> a >> b;
  a--, b--;

  string s;
  cin >> s;

  for (int i = 0; i < a; i++) {
    cout << s[i];
  }
  for (int i = b; i >= a; i--) {
    cout << s[i];
  }
  for (int i = b + 1; i < n; i++) {
    cout << s[i];
  }
  cout << '\n';
}

int main() {
  FastIO;
  solve();
}
