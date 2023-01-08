#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  FastIO;
  int n;
  while (cin >> n) {
    if (n == 0) return 0;

    vector<int> A(n);
    for (auto &a : A) cin >> a;
    sort(A.begin(), A.end());

    int max_count = 1;
    int count = 1;
    for (size_t i = 0; i < A.size() - 1; ++i) {
      if (A[i] + 1 == A[i + 1]) {
        count++;
        max_count = max(max_count, count);
      } else {
        count = 1;
      }
    }
    cout << max_count << '\n';
  }
}
