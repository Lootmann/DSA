#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

void solve() {
  int y;
  cin >> y;

  while (y % 4 != 2) y++;
  cout << y << '\n';
}

int main() {
  FastIO;
  solve();
}
