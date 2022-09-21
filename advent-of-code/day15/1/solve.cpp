#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;
using vvi = vector<vector<int>>;
using P = pair<int, int>;
using Cell = pair<int, P>;

vvi get_field() {
  vvi field;
  string line;

  while (cin >> line) {
    vi pos;
    for (auto const &l : line) {
      pos.emplace_back((int)(l - '0'));
    }
    field.emplace_back(pos);
  }

  return field;
}

auto print = [](vvi field) {
  for (auto const &line : field) {
    for (auto const &n : line) {
      if (n < 10) {
        cout << "  " << n << ' ';
      } else if (n < 100) {
        cout << " " << n << ' ';
      } else {
        cout << n << ' ';
      }
    }
    cout << '\n';
  }
};

// Dijkstra Method
void dfs(vvi field, vvi &dist, int gy, int gx) {
  // the starting position is never counted;
  dist[0][0] = 0;

  // Cell <cost, pair<x, y>>
  priority_queue<Cell, vector<Cell>, greater<Cell>> que;

  que.push(Cell(0, P(0, 0)));

  while (!que.empty()) {
    auto v = que.top();
    que.pop();

    // top
    int cost = v.first;

    int y = v.second.first;
    int x = v.second.second;

    if (cost > dist[y][x]) continue;

    if (y + 1 < gy) {
      if (dist[y + 1][x] > dist[y][x] + field[y + 1][x]) {
        dist[y + 1][x] = min(dist[y + 1][x], dist[y][x] + field[y + 1][x]);
        que.push(Cell(dist[y][x], P(y + 1, x)));
      }
    }

    if (x + 1 < gx) {
      if (dist[y][x + 1] > dist[y][x] + field[y][x + 1]) {
        dist[y][x + 1] = min(dist[y][x + 1], dist[y][x] + field[y][x + 1]);
        que.push(Cell(dist[y][x], P(y, x + 1)));
      }
    }
  }
}

int main() {
  vvi field = get_field();

  int gy = (int)field.size();
  int gx = (int)field.front().size();

  vector<vector<int>> dist(gy, vector<int>(gx, 10000000));
  dfs(field, dist, gy, gx);

  print(dist);
}
