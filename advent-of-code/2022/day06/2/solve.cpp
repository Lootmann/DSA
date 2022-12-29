#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

void solve(const string& line) {
  const size_t diff = 14;
  for (size_t i = 0; i < line.size() - diff; ++i) {
    set<char> st;
    for (size_t j = i; j < i + diff; ++j) {
      st.insert(line[j]);
    }

    // dup char
    if (st.size() == diff) {
      cout << i + diff << '\n';
      return;
    }
  }
}

int main() {
  FastIO;

  string line;
  while (cin >> line) {
    solve(line);
  }
}
