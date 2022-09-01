#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  map<int, int> A;
  vector<int> B(m);

  for (int i = 0; i < n; i++) {
    int noodle;
    cin >> noodle;
    if (A.find(noodle) != A.end()) {
      A[noodle]++;
    } else {
      A[noodle] = 1;
    }
  }

  for (auto &b : B) cin >> b;

  for (const auto noodle : B) {
    if (A.find(noodle) != A.end()) {
      if (A[noodle] >= 1) {
        A[noodle]--;
      } else {
        cout << "No" << '\n';
        return;
      }
    } else {
      cout << "No" << '\n';
      return;
    }
  }

  cout << "Yes" << '\n';
}

int main() {
  FastIO;
  solve();
}
