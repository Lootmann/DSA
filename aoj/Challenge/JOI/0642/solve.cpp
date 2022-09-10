#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  int count{0};
  int ans{0};

  for (const auto a : A) {
    if (a == 0)
      count = 0;
    else
      count++;

    ans = max(ans, count);
  }

  cout << ans + 1 << '\n';
}
