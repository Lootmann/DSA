#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

class UndirectedGraph {
public:
  int size;
  vector<vector<int>> graph;
  vector<int> visited;

  UndirectedGraph(int n) : size(n), graph{vector<vector<int>>(n)}, visited{vector<int>(n, -1)} {}

  void add(int from, int to) {
    graph[from].emplace_back(to);
    graph[to].emplace_back(from);
  }

  // Depth-First Search
  void dfs(int start) {
    int id = start;
    visited[start] = id;

    stack<int> st;
    st.push(start);

    while (!st.empty()) {
      int v = st.top();
      st.pop();

      for (const int nv : graph[v]) {
        if (not is_visited(nv)) {
          visited[nv] = id;
          st.push(nv);
        }
      }
    }  // while
  }

  // Breadth-First Search
  void bfs(int start) {
    int id = start;
    queue<int> q;
    q.push(start);

    while (!q.empty()) {
      int v = q.front();
      q.pop();

      for (const int nv : graph[v]) {
        if (not is_visited(nv)) {
          visited[nv] = id;
          q.push(nv);
        }
      }
    }
  }

  bool is_visited(int vertex) {
    return visited[vertex] != -1;
  }

  void show_dist() {
    for (size_t i = 0; i < visited.size(); i++) {
      cout << i << ' ' << visited.at(i) << '\n';
    }
  }
};

void solve_dfs(UndirectedGraph graph) {
  int n = graph.size;
  int count{0};

  for (int vertex = 0; vertex < n; vertex++) {
    if (not graph.is_visited(vertex)) {
      graph.dfs(vertex);
      count++;
    }
  }

  graph.show_dist();

  cout << "ans = " << count << '\n';
}

void solve_bfs(UndirectedGraph graph) {
  int n = graph.size;
  int count{0};

  for (int vertex = 0; vertex < n; vertex++) {
    if (not graph.is_visited(vertex)) {
      graph.bfs(vertex);
      count++;
    }
  }

  graph.show_dist();

  cout << "ans = " << count << '\n';
}

int main() {
  FastIO;

  int n, m;
  cin >> n >> m;

  UndirectedGraph graph(n);

  for (int i = 0; i < m; i++) {
    int from, to;
    cin >> from >> to;
    graph.add(from, to);
  }

  cout << ">>> DFS" << '\n';
  solve_dfs(graph);

  cout << "\n>>> BFS" << '\n';
  solve_bfs(graph);
}
