#include <bits/stdc++.h>
using namespace std;

long long int f(long long int x) {
  return x * x + 2 * x + 3;
}

int main() {
  int t;
  cin >> t;

  cout << f(f(f(t) + t) + f(f(t))) << '\n';
}
