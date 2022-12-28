#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using llint = long long int;

llint trib(llint n) {
  if (n == 0) return 0;
  if (n == 1) return 0;
  if (n == 2) return 1;
  return trib(n - 1) + trib(n - 2) + trib(n - 3);
}

int main() {
  int n;
  cin >> n;

  rep(i, n + 1) cout << trib(i) << '\n';
}
