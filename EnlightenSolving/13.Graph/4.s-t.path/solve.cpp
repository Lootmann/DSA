#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;

void dfs(const Graph &G, int v) {
  seen[v] = true;

  for (auto const nv : G[v]) {
    if (seen[nv]) continue;
    dfs(G, nv);
  }
}

void show(const Graph &G, int n) {
  for (int i = 0; i < n; i++) {
    cout << i << " { ";
    for (auto v : G[i]) {
      cout << v << ' ';
    }
    cout << "}\n";
  }
}

void solve() {
  int n, m;
  cin >> n >> m;

  Graph graph(n);

  for (int i = 0; i < m; i++) {
    int from, to;
    cin >> from >> to;

    // directed graph
    graph[from].emplace_back(to);
  }

  seen.assign(n, false);
  dfs(graph, 0);

  show(graph, n);

  int s, q;
  cin >> s >> q;

  cout << "start = " << s << '\n';

  for (int i = 0; i < q; i++) {
    int t;
    cin >> t;

    cout << "t = " << t << ", ";

    if (seen[t])
      cout << "Yes" << '\n';
    else
      cout << "No" << '\n';
  }
}

int main() {
  FastIO;
  solve();
}
