#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  pair<int, int> pos = make_pair(0, 0);
  int direction{0};

  for (const char ch : s) {
    if (ch == 'S') {
      switch (direction) {
        case 0:
          pos.first++;
          break;

        case 1:
          pos.second--;
          break;

        case 2:
          pos.first--;
          break;

        case 3:
          pos.second++;
          break;
      }
    } else {
      direction++;
      direction %= 4;
    }
  }

  cout << pos.first << ' ' << pos.second << '\n';
}

int main() {
  FastIO;
  solve();
}
