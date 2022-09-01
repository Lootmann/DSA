#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

using vi = vector<int>;
using vvi = vector<vector<int>>;

class DirectedGraph {
private:
  vvi graph;

public:
  DirectedGraph(int n) : graph{vvi(n)} {}

  void add(int from, int to) {
    graph[from].emplace_back(to);
  }

  void bfs(int start, vector<bool> &visited) {
    visited[start] = true;

    queue<int> q;
    q.push(start);

    while (!q.empty()) {
      int vertex = q.front();
      q.pop();

      for (const int nv : graph[vertex]) {
        if (not visited[nv]) {
          visited[nv] = true;
          q.push(nv);
        }
      }
    }
  }
};

void solve() {
  int n, m;
  cin >> n >> m;

  DirectedGraph graph(n);

  while (m--) {
    int from, to;
    cin >> from >> to;

    graph.add(from, to);
  }

  int q;
  cin >> q;

  while (q--) {
    int s, t;
    cin >> s >> t;
    vector<bool> visited(n, false);

    graph.bfs(s, visited);

    cout << "s-t : (" << s << ", " << t << ") ";
    cout << (visited[t] ? "yes" : "no") << '\n';
  }
}

int main() {
  FastIO;
  solve();
}
