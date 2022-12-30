#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

using vvi = vector<vector<int>>;

vvi get_input() {
  vvi inputs;
  string str;

  while (cin >> str) {
    vector<int> vi;
    for (const auto &ch : str) {
      vi.emplace_back(ch - '0');
    }
    inputs.emplace_back(vi);
  }

  return inputs;
}

auto print = [](const vvi &lines) {
  for (const auto &line : lines) {
    for (const auto &cell : line) {
      cout << cell;
    }
    cout << '\n';
  }
  cout << '\n';
};

void progress(vvi &octopuses, const int Height, const int Width) {
  /*
   * First, the energy level of each octopus increases by 1.
   */
  rep(i, Height) rep(j, Width) {
    octopuses[i][j]++;
  }

  /*
   * Then, any octopus with an energy level greater than 9 flashes.
   * This increases the energy level of all adjacent octopuses by 1,
   * including octopuses that are diagonally adjacent.
   *
   * If this causes an octopus to have an energy level greater than 9,
   * it also flashes.
   *
   * This process continues as long as new octopuses keep having their
   * energy level increased beyond 9.
   * (An octopus can only flash at most once per step.)
   */
  int dy[] = {1, 0, -1, 1, -1, 1, 0, -1};
  int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  bool is_flash = true;

  // before step, all energies are incremented,
  // all energies are greater than 0
  while (is_flash) {
    is_flash = false;

    rep(i, Height) {
      rep(j, Width) {
        if (octopuses[i][j] > 9 && octopuses[i][j] != 0) {
          is_flash = true;
          octopuses[i][j] = 0;
          rep(idx, 8) {
            int h = i + dy[idx];
            int w = j + dx[idx];

            if ((0 <= h && h < Height) && (0 <= w && w < Width)) {
              if (octopuses[h][w] != 0) {
                octopuses[h][w]++;
              }
            }
          }
        }
      }
    }
  }

  /*
   * Finally, any octopus that flashed during this step has its energy level set
   *  to 0, as it used all of its energy to flash.
   */
  rep(h, Height) rep(w, Width) {
    if (octopuses[h][w] > 9) {
      octopuses[h][w] = 0;
    }
  }
}

int count_octopus(const vvi &octopuses, int Height, int Width) {
  int count{0};
  rep(h, Height) rep(w, Width) {
    if (octopuses[h][w] == 0) count++;
  }
  return count;
}

int main() {
  int step;
  cin >> step;

  vector<vector<int>> octopus = get_input();

  const int Height = (int)octopus.size();
  const int Width = (int)octopus[0].size();

  int count{0};

  rep(s, step) {
    progress(octopus, Height, Width);
    count += count_octopus(octopus, Height, Width);
  }

  cout << count << '\n';
}
