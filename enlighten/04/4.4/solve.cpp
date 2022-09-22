#include <bits/stdc++.h>
using namespace std;
using llint = long long int;

namespace me {
llint gcd(llint n, llint r) {
  if (r == 0) return n;
  return gcd(r, n % r);
}
};  // namespace me

int main() {
  int tt;
  cin >> tt;

  while (tt--) {
    llint n, r;
    cin >> n >> r;

    cout << "(n, r) = (" << n << ", " << r << ")" << '\n';
    cout << me::gcd(n, r) << '\n';
  }
}
