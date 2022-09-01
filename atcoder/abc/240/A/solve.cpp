#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int a, b;
  cin >> a >> b;

  a--;
  b--;

  if (a + 1 == b || (b + 1) % 10 == a)
    cout << "Yes" << '\n';
  else
    cout << "No" << '\n';
}

int main() {
  FastIO;
  solve();
}
