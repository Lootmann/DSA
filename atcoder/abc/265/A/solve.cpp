#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  FastIO;
  int x, y, n;
  cin >> x >> y >> n;

  int min_cost = 100 * 101;

  rep(xx, n + 1) rep(yy, n + 1) {
    if (xx + yy * 3 == n) {
      min_cost = min(min_cost, xx * x + yy * y);
    }
  }
  cout << min_cost << '\n';
}
