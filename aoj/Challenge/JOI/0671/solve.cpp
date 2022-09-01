#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n;
  cin >> n;

  if (n == 1) {
    cout << 1 << '\n';
    return;
  }

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  int ans{0};
  int count{0};

  for (size_t i = 0; i < A.size() - 1; i++) {
    if (A[i] <= A[i + 1]) {
      if (count == 0)
        count += 2;
      else
        count++;
    } else {
      count = 0;
    }
    ans = max(ans, count);
  }

  cout << ans << '\n';
}

int main() {
  FastIO;
  solve();
}
