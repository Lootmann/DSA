#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << a - b * c << '\n';
}

int main() {
  FastIO;
  solve();
}
