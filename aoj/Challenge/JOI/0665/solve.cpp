#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  vector<int> A(n), B(m);
  vector<int> C;

  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;

  /* sort(A.begin(), A.end()); */
  /* sort(B.begin(), B.end()); */

  int a{0}, b{0};
  while (a < n && b < m) {
    if (A[a] < B[b]) {
      C.emplace_back(A[a]);
      a++;
    } else {
      C.emplace_back(B[b]);
      b++;
    }
  }

  while (a < n) {
    C.emplace_back(A[a]);
    a++;
  }

  while (b < m) {
    C.emplace_back(B[b]);
    b++;
  }

  // ans
  for (const int &num : C) {
    cout << num << '\n';
  }
}

int main() {
  FastIO;
  solve();
}
