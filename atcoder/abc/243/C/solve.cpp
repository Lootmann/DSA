#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<pair<int, int>> vp;

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    vp.emplace_back(make_pair(x, y));
  }

  string s;
  cin >> s;

  map<int, int> right;  // Direction -> smaller x
  map<int, int> left;   // Direction <- bigger x

  for (size_t i = 0; i < s.size(); i++) {
    int x = vp[i].first;
    int y = vp[i].second;

    // update
    if (s[i] == 'R') {
      if (right.find(y) != right.end()) {
        right[y] = min(right[y], x);
      } else {
        right[y] = x;
      }
    } else {
      if (left.find(y) != left.end()) {
        left[y] = max(left[y], x);
      } else {
        left[y] = x;
      }
    }

    // searching
    if (right.find(y) != right.end() && left.find(y) != left.end()) {
      if (right[y] < left[y]) {
        cout << "Yes" << '\n';
        return;
      }
    }
  }

  cout << "No" << '\n';
}

int main() {
  FastIO;
  solve();
}
