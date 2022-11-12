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

  set<int> st;
  for (int bit = 0; bit <= (1 << n); ++bit) {
    int sum = 0;

    for (int i = 0; i < n; ++i) {
      if (bit & (1 << i)) {
        sum += A[i];
      }
    }

    st.insert(sum);
  }

  int q;
  cin >> q;
  vector<int> M(q);
  for (auto &m : M) cin >> m;

  for (const auto &m : M) {
    if (st.find(m) != st.end()) {
      cout << "yes" << '\n';
    } else {
      cout << "no" << '\n';
    }
  }
}
