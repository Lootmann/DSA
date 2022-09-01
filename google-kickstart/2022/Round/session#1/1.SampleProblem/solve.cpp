#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve(int problem_num) {
  int n, m;
  cin >> n >> m;

  int candies{0};
  rep(_, n) {
    int candy;
    cin >> candy;

    candies += candy;
  }

  cout << "Case #" << problem_num << ": " << candies % m << '\n';
}

int main() {
  FastIO;
  int tt;
  cin >> tt;
  rep(t, tt) solve(t + 1);
}
