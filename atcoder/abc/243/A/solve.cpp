#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int v, a, b, c;
  cin >> v >> a >> b >> c;

  while (true) {
    v -= a;
    if (v < 0) {
      cout << "F" << '\n';
      return;
    }

    v -= b;
    if (v < 0) {
      cout << "M" << '\n';
      return;
    }

    v -= c;
    if (v < 0) {
      cout << "T" << '\n';
      return;
    }
  }
}

int main() {
  FastIO;
  solve();
}
