#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  FastIO;
  string s;
  cin >> s;

  set<char> st;
  for (const auto &ch : s) {
    st.insert(ch);
  }

  // aaa -> 1
  // aab -> 3
  // abc -> 6
  if (st.size() == 3) cout << 6 << '\n';
  if (st.size() == 2) cout << 3 << '\n';
  if (st.size() == 1) cout << 1 << '\n';
}
