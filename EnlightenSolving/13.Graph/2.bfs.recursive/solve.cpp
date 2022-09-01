#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;

void dfs(const Graph &G, int v) {
  cout << "in = " << v << '\n';
  seen[v] = true;

  for (auto nv : G[v]) {
    if (seen[nv]) continue;
    cout << "  nv = " << nv << '\n';
    dfs(G, nv);
  }
}

void solve() {
  int n, m;
  cin >> n >> m;

  Graph graph(n);
  for (int i = 0; i < m; i++) {
    int from, to;
    cin >> from >> to;
    graph[from].emplace_back(to);
  }

  seen.assign(n, false);

  for (int v = 0; v < n; v++) {
    if (seen[v]) continue;
    dfs(graph, v);
  }
}

int main() {
  FastIO;
  solve();
}
