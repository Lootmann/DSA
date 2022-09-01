#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n, x;
  cin >> n >> x;

  int count{n};
  int min_cost{1001};

  while (n--) {
    int cost;
    cin >> cost;

    x -= cost;
    min_cost = min(min_cost, cost);
  }

  cout << count + x / min_cost << '\n';
}

int main() {
  FastIO;
  solve();
}
