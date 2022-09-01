#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

bool is_median(int a, int b, int c) {
  return (a <= b && b <= c) || (a >= b && b >= c);
}

void solve() {
  int a, b, c;
  cin >> a >> b >> c;

  cout << (is_median(a, b, c) ? "Yes" : "No") << "\n";
}

int main() {
  FastIO;
  solve();
}
