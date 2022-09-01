#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve(int testcase) {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  int score{0};

  rep(i, n / 2) {
    if (s[i] != s[n - i - 1]) {
      score++;
    }
  }

  int ans{0};

  if (score > k)
    ans = score - k;
  else if (score < k)
    ans = k - score;

  cout << "Case #" << testcase << ": " << ans << '\n';
}

int main() {
  FastIO;

  int tt;
  cin >> tt;

  for (int i = 0; i < tt; i++) {
    solve(i + 1);
  }
}
