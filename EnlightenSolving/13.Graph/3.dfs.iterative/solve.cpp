#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int>>;

vector<int> bfs(const Graph &g, int s) {
  int n = (int)g.size();
  vector<int> dist(n, -1);
  queue<int> que;

  dist[0] = 0;
  que.push(s);

  while (!que.empty()) {
    int v = que.front();
    que.pop();

    for (const int nv : g[v]) {
      if (dist[nv] != -1) continue;
      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }

  return dist;
}

void solve() {
  // HERE COMES A PAIN
  int n, m;
  cin >> n >> m;

  cout << "(n, m) = (" << n << ", " << m << ")\n";

  Graph graph(n);

  for (int i = 0; i < m; i++) {
    int from, to;
    cin >> from >> to;

    graph[from].emplace_back(to);
    graph[to].emplace_back(from);
  }

  vector<int> dist = bfs(graph, 0);
  for (int v = 0; v < n; v++) {
    cout << v << ": " << dist[v] << endl;
  }
}

int main() {
  FastIO;
  solve();
}
