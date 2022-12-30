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
  // step 1
  rep(i, Height) rep(j, Width) {
    octopuses[i][j]++;
  }

  // step 2
  int dy[] = {1, 0, -1, 1, -1, 1, 0, -1};
  int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  bool is_flash = true;

  // step 3
  while (is_flash) {
    is_flash = false;

    rep(i, Height) rep(j, Width) {
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

  // step 4
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
  vector<vector<int>> octopus = get_input();
  int field = (int)octopus.size() * (int)octopus.front().size();

  const int Height = (int)octopus.size();
  const int Width = (int)octopus[0].size();

  int step{0};

  while (true) {
    progress(octopus, Height, Width);
    step++;
    int count = count_octopus(octopus, Height, Width);

    if (count == field) {
      break;
    }
  }

  cout << step << '\n';
}
