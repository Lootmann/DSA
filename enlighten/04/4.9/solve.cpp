#include <bits/stdc++.h>
using namespace std;

bool is_ok(vector<int> &vi, int idx, int w) {
  cout << "(idx, w) = (" << idx << ", " << w << ")" << '\n';
  if (w == 0) return true;
  if (w < 0 || idx == 0) return false;

  return is_ok(vi, idx - 1, w - vi[idx]) || is_ok(vi, idx - 1, w);
}

void solve() {
  int n, w;
  cin >> n >> w;

  vector<int> vi(n);
  for (auto &v : vi) cin >> v;

  if (is_ok(vi, n - 1, w)) {
    cout << "Yes" << '\n';
  } else {
    cout << "No" << '\n';
  }
}

int main() {
  int tt;
  cin >> tt;

  for (int i = 0; i < tt; i++) {
    cout << "TEST #" << (i + 1) << '\n';
    solve();
    cout << '\n';
  }
}
