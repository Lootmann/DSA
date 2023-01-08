#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
using namespace std;

vector<vector<char>> get_input() {
  vector<vector<char>> grid;
  string line;

  while (cin >> line) {
    vector<char> vc;
    for (auto &ch : line) {
      vc.emplace_back(ch);
    }
    grid.emplace_back(vc);
  }

  return grid;
}

struct Pos {
  int y, x;
  Pos(int y_ = 0, int x_ = 0) : y{y_}, x{x_} {}

  void up() {
    y--;
  }
  void down() {
    y++;
  }
  void left() {
    x--;
  }
  void right() {
    x++;
  }

  tuple<int, int> out() {
    return tie(y, x);
  }
};

bool can_move(Pos current, const int &h, const int &w) {
  return 0 <= current.x && current.x < w && 0 <= current.y && current.y < h;
}

// pre move
void ans(Pos &pos, const char &move) {
  pos.y++;
  pos.x++;
  if (move == 'R') pos.left();
  if (move == 'L') pos.right();
  if (move == 'U') pos.down();
  if (move == 'D') pos.up();
  cout << pos.y << ' ' << pos.x << '\n';
}

int main() {
  FastIO;
  int h, w;
  cin >> h >> w;

  vector<vector<char>> grid = get_input();
  set<tuple<int, int>> visited;
  Pos current;

  while (true) {
    // same position == infinite loop
    if (visited.find(current.out()) != visited.end()) {
      cout << -1 << '\n';
      return 0;
    }

    visited.insert(current.out());
    char move = grid[current.y][current.x];

    if (move == 'R')
      current.right();
    else if (move == 'L')
      current.left();
    else if (move == 'D')
      current.down();
    else
      current.up();

    // can't move == outbound
    if (!can_move(current, h, w)) {
      ans(current, move);
      return 0;
    }
  }
}
