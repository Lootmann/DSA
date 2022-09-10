#include <bits/stdc++.h>
using namespace std;

int cost(const int &n, const int &number, const int &yen) {
  return (n + (number - 1)) / number * yen;
}

int main() {
  int n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;

  cout << min(cost(n, a, b), cost(n, c, d)) << '\n';
}
