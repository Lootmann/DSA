#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  FastIO;
  int h, w;
  cin >> h >> w;

  vector<string> field(h);
  for (auto &line : field) cin >> line;

  int count{0};
  for (auto &line : field) {
    for (auto &cell : line) {
      if (cell == '#') count++;
    }
  }

  cout << count << '\n';
}
