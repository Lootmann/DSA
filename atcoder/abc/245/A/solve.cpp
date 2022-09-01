#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a == 0 && b == 0 && c == 0 && d == 0) {
    cout << "Takahashi" << '\n';
    return;
  }

  if (a > c) {
    cout << "Aoki" << '\n';
  } else if (a < c) {
    cout << "Takahashi" << '\n';
  } else {
    if (b <= d) {
      cout << "Takahashi" << '\n';
    } else {
      cout << "Aoki" << '\n';
    }
  }
}

int main() {
  FastIO;
  solve();
}
