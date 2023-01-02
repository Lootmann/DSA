#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

tuple<vector<char>, vector<int>> get_input() {
  vector<char> vc;
  vector<int> vi;

  string line;
  while (getline(cin, line)) {
    size_t idx = line.find(' ');
    vc.emplace_back(line[0]);
    vi.emplace_back(stoi(line.substr(idx)));
  }

  return make_tuple(vc, vi);
}

struct Pos {
  int y, x;
  Pos() : y{0}, x{0} {}

  void up() {
    y--;
  }

  void down() {
    y++;
  }

  void right() {
    x++;
  }

  void left() {
    x--;
  }

  pair<int, int> out() {
    return make_pair(y, x);
  }
};

void connecting_rope(Pos const& head, Pos& tail) {
  int dist_x = abs(head.x - tail.x);
  int dist_y = abs(head.y - tail.y);

  // adjecent
  if (dist_x + dist_y == 0 || dist_x + dist_y == 1) return;
  // diagonal adjecent
  if (dist_x == 1 && dist_y == 1) return;

  // same row
  if (head.y == tail.y) {
    if (tail.x < head.x)
      tail.x = head.x - 1;
    else
      tail.x = head.x + 1;
  }

  // same col
  if (head.x == tail.x) {
    if (head.y < tail.y)
      tail.y = head.y + 1;
    else
      tail.y = head.y - 1;
  }

  // diagonal
  //  H
  //
  // T T
  if (head.y < tail.y && dist_x < dist_y) {
    tail.x = head.x;
    tail.y = head.y + 1;
  }

  // T
  //    H
  // T
  if (tail.x < head.x && dist_y < dist_x) {
    tail.y = head.y;
    tail.x = head.x - 1;
  }

  // T T
  //
  //  H
  if (tail.y < head.y && dist_x < dist_y) {
    tail.x = head.x;
    tail.y = head.y - 1;
  }

  //    T
  // H
  //    T
  if (head.x < tail.x && dist_y < dist_x) {
    tail.y = head.y;
    tail.x = head.x + 1;
  }
}

int main() {
  FastIO;

  vector<char> pos;
  vector<int> dist;
  tie(pos, dist) = get_input();

  Pos head, tail;
  set<pair<int, int>> st;
  st.insert(make_pair(0, 0));

  // calc fields
  for (size_t i = 0; i < pos.size(); i++) {
    rep(_, dist[i]) {
      switch (pos[i]) {
        case 'R':
          head.right();
          break;
        case 'L':
          head.left();
          break;
        case 'U':
          head.up();
          break;
        case 'D':
          head.down();
          break;
      }
      connecting_rope(head, tail);
      st.insert(tail.out());
    }
  }

  cout << st.size() << '\n';
}
