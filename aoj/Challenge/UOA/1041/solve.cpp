#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n;
  while (cin >> n) {
    if (n == 0) break;

    int total{0};
    for (int i = 0; i < n / 4; i++) {
      int score;
      cin >> score;
      total += score;
    }

    cout << total << '\n';
  }
}

int main() {
  FastIO;
  solve();
}
