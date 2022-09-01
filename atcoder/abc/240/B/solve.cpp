#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n;
  cin >> n;

  set<int> st;
  rep(_, n) {
    int num;
    cin >> num;
    st.insert(num);
  }

  cout << st.size() << '\n';
}

int main() {
  FastIO;
  solve();
}
