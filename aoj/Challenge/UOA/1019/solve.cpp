#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k) {
  vector<int> S(k);
  for (auto &s : S) cin >> s;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      int blood;
      cin >> blood;
      S[j] -= blood;
    }
  }

  bool is_ok = true;

  for (const auto &s : S) {
    if (s < 0) is_ok = false;
  }

  if (is_ok)
    cout << "Yes" << '\n';
  else
    cout << "No" << '\n';
}

int main() {
  int n, k;

  while (cin >> n >> k) {
    if (n == 0 && k == 0) break;
    solve(n, k);
  }
}
