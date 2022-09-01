#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n, m, c;
  cin >> n >> m >> c;

  vector<int> B(m);
  for (auto &b : B) cin >> b;

  int count{0};

  for (int i = 0; i < n; i++) {
    int score{0};

    vector<int> A(m);
    for (auto &a : A) cin >> a;

    for (int j = 0; j < m; j++) {
      score += A[j] * B[j];
    }

    score += c;

    if (score > 0) count++;
  }

  cout << count << '\n';
}

int main() {
  FastIO;
  solve();
}
