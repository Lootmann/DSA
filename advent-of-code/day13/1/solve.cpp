#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;

using vvb = vector<vector<bool>>;

/**
 * split_pos
 *
 * @param (pos) string "xx,yy", "xxxxxx,yyy", ...
 * @return tuple<int, int> {x_pos, y_pos}
 */
tuple<int, int> split_pos(string pos) {
  size_t idx = pos.find(",");
  string x = pos.substr(0, idx);
  string y = pos.substr(idx + 1, pos.size() - idx);
  return {stoi(x), stoi(y)};
}

/**
 * get_pos
 *
 * @return vector<vector<bool>>
 */
vvb get_pos() {
  vector<pair<int, int>> pos;
  string line;

  int x_max{}, y_max{};
  while (getline(cin, line)) {
    if (line == "") break;

    auto [x, y] = split_pos(line);
    pos.emplace_back(make_pair(x, y));

    x_max = max(x, x_max);
    y_max = max(y, y_max);
  }

  vvb origami(y_max + 1, vector<bool>(x_max + 1, false));

  for (auto const &p : pos) {
    origami[p.second][p.first] = true;
  }

  return origami;
}

int count_dot(vvb paper, int height, int width) {
  int count{0};

  for (int h = 0; h < height; h++) {
    for (int w = 0; w < width; w++) {
      if (paper[h][w]) count++;
    }
  }

  return count;
}

int main() {
  vvb origami = get_pos();

  int height = (int)origami.size();
  int width = (int)origami.front().size();

  auto print = [](vvb v, int H, int W) {
    for (int h = 0; h < H; h++) {
      for (int w = 0; w < W; w++) {
        cout << (v[h][w] ? '#' : '.');
      }
      cout << '\n';
    }
  };

  // folding
  string line;
  while (getline(cin, line)) {
    auto idx = line.find("=");
    char coord = line[idx - 1];
    int pos = stoi(line.substr(idx + 1));

    if (coord == 'x') {
      for (int h = 0; h < height; h++) {
        for (int w = 0; w < pos; w++) {
          if (origami[h][width - w - 1]) {
            origami[h][w] = true;
          }
        }
      }

      width = pos;
    } else {
      for (int h = 0; h < pos; h++) {
        for (int w = 0; w < width; w++) {
          if (origami[height - h - 1][w]) {
            origami[h][w] = true;
          }
        }
      }

      height = pos;
    }

    // print
    /* cout << "* print :" << '\n'; */
    /* print(origami, height, width); */

    int count = count_dot(origami, height, width);
    cout << "count = " << count << '\n';
  }
}
