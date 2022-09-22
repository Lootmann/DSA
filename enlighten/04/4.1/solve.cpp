#include <bits/stdc++.h>
using namespace std;
using llint = long long int;

llint func(llint n) {
  cout << "func(" << n << ")\n";
  if (n == 0) return 0;

  llint res = n + func(n - 1);
  cout << "sum = " << res << '\n';
  return res;
}

void solve() {
  int n;
  cin >> n;

  cout << func(n) << '\n';
}

int main() {
  int tt;
  cin >> tt;
  while (tt--) solve();
}
