#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  // adjacency matrix
  vector<vector<bool>> adj(n, vector<bool>(n));

  rep(i, m) {
    int from, to;
    cin >> from >> to;
    from--, to--;
    adj[from][to] = true;
    adj[to][from] = true;
  }

  int ans{0};
  REP(i, 0, n) REP(j, i + 1, n) REP(k, j + 1, n) {
    if (adj[i][j] and adj[j][k] and adj[k][i]) {
      ans++;
    }
  }

  cout << ans << '\n';
}

int main() {
  FastIO;
  solve();
}
