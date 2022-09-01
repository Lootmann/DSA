#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  vector<int> vi;

  for (int i = 0; i < 10; i++) {
    int num;
    cin >> num;
    vi.emplace_back(num);
  }

  int idx{3};
  int button{0};

  while (idx--) {
    /* cout << "button = " << button << '\n'; */
    button = vi[button];
  }

  cout << button << '\n';
}

int main() {
  FastIO;
  solve();
}
