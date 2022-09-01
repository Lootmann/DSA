#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

void output(const vector<int>& vi) {
  for (size_t i = 0; i < vi.size(); i++) {
    cout << vi[i];
    cout << (i != vi.size() - 1 ? " " : "\n");
  }
}

void solve() {
  int n;
  cin >> n;

  vector<vector<int>> vvi;

  // calc
  rep(i, n) {
    if (i == 0)
      vvi.emplace_back(vector<int>{1});
    else {
      vector<int> cur;
      cur.emplace_back(1);

      for (size_t j = 0; j < vvi[i - 1].size() - 1; j++) {
        cur.emplace_back(vvi[i - 1].at(j) + vvi[i - 1].at(j + 1));
      }

      cur.emplace_back(1);
      vvi.emplace_back(cur);
    }
  }

  // output
  rep(i, n) output(vvi[i]);
}

int main() {
  FastIO;
  solve();
}
