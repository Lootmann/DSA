#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> A(n), B(n), C(n);

  rep(i, n) {
    int a;
    cin >> a;
    A[i] = a - 1;
  }
  for (auto &b : B) cin >> b;
  for (auto &c : C) cin >> c;

  int sum{0};

  for (const auto i : A) sum += B[i];

  for (int i = 0; i < n - 1; i++) {
    if (A[i] + 1 == A[i + 1]) {
      sum += C[A[i]];
    }
  }

  cout << sum << '\n';
}

int main() {
  FastIO;
  solve();
}
