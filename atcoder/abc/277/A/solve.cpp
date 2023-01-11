#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
using namespace std;

int main() {
  FastIO;
  int n, x;
  cin >> n >> x;

  vector<int> P(n);
  for (auto &p : P) cin >> p;

  for (size_t i = 0; i < P.size(); ++i) {
    if (x == P[i]) {
      cout << i + 1 << '\n';
    }
  }
}
