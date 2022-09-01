#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve(int testcase) {
  string I, P;
  cin >> I >> P;

  int count{0};
  size_t i{0}, p{0};

  while (p < P.size()) {
    if (I[i] == P[p]) {
      i++;
      p++;
    } else {
      p++;
      count++;
    }
  }

  if (I.size() == i) {
    cout << "Case #" << testcase << ": " << count << '\n';
  } else {
    cout << "Case #" << testcase << ": IMPOSSIBLE" << '\n';
  }
}

int main() {
  FastIO;

  int tt;
  cin >> tt;

  for (int i = 0; i < tt; i++) {
    solve(i + 1);
  }
}
