#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> R(n);
  for (auto &r : R) cin >> r;

  int minv = R.front();
  int profit{-1000000001};

  for (size_t i = 1; i < R.size(); i++) {
    profit = max(profit, R.at(i) - minv);
    minv = min(minv, R.at(i));
  }

  cout << profit << '\n';
}
