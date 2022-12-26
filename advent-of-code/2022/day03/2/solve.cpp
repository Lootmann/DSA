#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

char intersection(string line1, string line2, string line3) {
  set<char> group1(line1.begin(), line1.end());
  set<char> group2(line2.begin(), line2.end());
  set<char> group3(line3.begin(), line3.end());

  set<char> share;
  for (auto &ch : group1) {
    if (group2.find(ch) != group2.end() && group3.find(ch) != group3.end()) {
      share.insert(ch);
    }
  }

  if (share.size() != 1)
    throw std::invalid_argument("Can't recognize type char");

  return *share.begin();
}

int calc_score(char ch) {
  if ('a' <= ch && ch <= 'z') return ch - 'a' + 1;
  if ('A' <= ch && ch <= 'Z') return ch - 'A' + 27;
  throw std::invalid_argument("Wrong char");
}

void solve(string filename) {
  ifstream file;
  file.open(filename, ios::in);

  string buffer;
  size_t index{};
  vector<string> lines;

  int score{};
  while (getline(file, buffer)) {
    lines.emplace_back(buffer);

    if (++index == 3) {
      auto unique = intersection(lines[0], lines[1], lines[2]);
      score += calc_score(unique);

      lines.clear();
      index = 0;
    }
  }

  cout << score << '\n';
}

int main() {
  FastIO;
  vector<string> vs{"./in1", "./in2"};

  for (auto &filename : vs) {
    cout << ">>> solve : " << filename << '\n';
    solve(filename);
    cout << '\n';
  }
}
