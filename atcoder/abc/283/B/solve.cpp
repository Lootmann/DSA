#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  FastIO;

  int n;
  cin >> n;
  vector<int> A(n);
  for (auto &a : A) cin >> a;

  int q;
  cin >> q;
  rep(i, q) {
    int query, k;
    cin >> query >> k;

    if (query == 1) {
      int x;
      cin >> x;
      A[k - 1] = x;
    } else {
      cout << A[k - 1] << '\n';
    }
  }
}
