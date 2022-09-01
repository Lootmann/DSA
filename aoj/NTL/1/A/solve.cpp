#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n;
  cin >> n;

  int nn = n;
  vector<int> vi;

  int idx{2};
  while (n > idx) {
    if (n % idx == 0) {
      vi.emplace_back(idx);
      n = n / idx;
    } else {
      if (idx % 2 == 0)
        idx++;
      else
        idx += 2;
    }
  }

  if (idx != 1) vi.emplace_back(idx);

  sort(vi.begin(), vi.end());

  cout << nn << ":";

  for (size_t i = 0; i < vi.size(); i++) {
    cout << " " << vi.at(i);
  }
  cout << '\n';
}

int main() {
  FastIO;
  solve();
}
