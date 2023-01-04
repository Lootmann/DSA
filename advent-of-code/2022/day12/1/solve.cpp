#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define Pair pair<int, int>
#define vvi vector<vector<int>>
#define vi vector<int>
using namespace std;

/*
 * util
 * */
auto print_pair = [](Pair const &p) {
  cout << p.first << ' ' << p.second << '\n';
};

auto show = [](vvi const &vii) {
  for (auto &line : vii) {
    for (auto &num : line) {
      printf("%3d ", num);
    }
    printf("\n");
  }
};

vvi get_input() {
  vvi vvc;
  string line;

  while (cin >> line) {
    vi vc;
    for (auto &ch : line) {
      if (ch == 'S')
        vc.emplace_back(0);
      else if (ch == 'E')
        vc.emplace_back(99);
      else
        vc.emplace_back((int)(ch - 'a' + 1));
    }
    vvc.emplace_back(vc);
  }
  return vvc;
}

Pair find_pair(vvi const &field, const char &target) {
  Pair point;
  for (int y = 0; y < (int)field.size(); ++y) {
    for (int x = 0; x < (int)field[0].size(); ++x) {
      if (field[y][x] == target) {
        return make_pair(y, x);
      }
    }
  }
  throw invalid_argument("hoge");
}

/*
 * bfs
 * */
void bfs(vvi const &field, Pair const start, vvi &track) {
  const int height = (int)field.size();
  const int width = (int)field[0].size();

  // current height is 1
  track[start.first][start.second] = 1;

  set<Pair> visited;
  visited.insert(start);

  queue<Pair> que;
  que.push(start);

  while (!que.empty()) {
    Pair v = que.front();
    que.pop();

    int current_height = field[v.first][v.second];
    vector<int> dy{0, -1, 1, 0}, dx{-1, 0, 0, 1};

    for (int k = 0; k < 4; ++k) {
      int next_y = dy[k] + v.first;
      int next_x = dx[k] + v.second;

      // outbound
      if (0 <= next_y && next_y < height && 0 <= next_x && next_x < width) {
        // already visited vertex
        if (visited.find(Pair(next_y, next_x)) != visited.end()) {
          continue;
        }

        // at most one higher, but can be lower
        int nv = field[next_y][next_x];

        if (current_height + 1 < nv) {
          continue;
        }

        track[next_y][next_x] = track[v.first][v.second] + 1;
        visited.insert(Pair(next_y, next_x));
        que.push(Pair(next_y, next_x));
      }
    }  // for
  }    // while
}  // dfs

int main() {
  FastIO;

  vvi field = get_input();
  vvi track{field.size(), vi(field[0].size(), 0)};

  auto start = find_pair(field, 0);

  printf(">>> BFS\n");
  bfs(field, start, track);
  printf("\n");

  printf("\n>>> field\n");
  show(field);

  printf("\n>>> track\n");
  show(track);

  int ans = 0;
  for (auto &line : track) {
    for (auto &height : line) {
      ans = max(ans, height);
    }
  }

  printf("ans = %d\n", ans);
}
