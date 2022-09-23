#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

using llint = long long int;

void rec(llint maxv, llint sum, llint &total, llint weight) {
  auto count = [](llint num) {
    bool is_3{false}, is_5{false}, is_7{false};
    while (num > 0) {
      if (num % 10 == 7) is_7 = true;
      if (num % 10 == 5) is_5 = true;
      if (num % 10 == 3) is_3 = true;
      num /= 10;
    }
    return is_7 && is_5 && is_3;
  };

  if (maxv < sum) return;
  if (count(sum)) total++;

  rec(maxv, sum + 3 * weight, total, weight * 10);
  rec(maxv, sum + 5 * weight, total, weight * 10);
  rec(maxv, sum + 7 * weight, total, weight * 10);
}

int main() {
  llint n;
  cin >> n;

  llint total{0};
  rec(n, 0, total, 1);

  cout << total << '\n';
}
