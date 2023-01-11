#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  FastIO;

  map<int, vector<int>> graph;

  int n;
  cin >> n;

  rep(_, n) {
    int a, b;
    cin >> a >> b;
    graph[a].emplace_back(b);
    graph[b].emplace_back(a);
  }

  stack<int> st;
  st.push(1);

  set<int> visited;
  visited.insert(1);

  while (!st.empty()) {
    int v = st.top();
    st.pop();

    for (auto nv : graph[v]) {
      if (visited.find(nv) == visited.end()) {
        st.push(nv);
        visited.insert(nv);
      }
    }
  }

  int max_height{};
  for (auto &v : visited) {
    max_height = max(max_height, v);
  }
  cout << max_height << '\n';
}
