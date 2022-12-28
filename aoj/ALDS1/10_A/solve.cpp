#include <bits/stdc++.h>
using namespace std;
using llint = long long int;

int main() {
  int n;
  cin >> n;

  vector<llint> memo(45, -1);
  memo[0] = 1;
  memo[1] = 1;

  auto fib = [&](int m) {
    for (int i = 2; i <= n; i++) {
      memo[i] = memo[i - 1] + memo[i - 2];
    }
    return memo[m];
  };

  cout << fib(n) << '\n';
}
