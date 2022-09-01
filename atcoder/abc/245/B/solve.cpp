#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<bool> A(2001);
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    A[num] = true;
  }

  for (int i = 0; i <= 2000; i++) {
    if (!A[i]) {
      cout << i << '\n';
      return;
    }
  }
}

int main() {
  FastIO;
  solve();
}
