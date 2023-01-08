#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
using namespace std;

vector<string> split(const string line, const char delimiter) {
  vector<string> res;
  stringstream ss{line};
  string buf;
  while (getline(ss, buf, delimiter)) {
    res.emplace_back(buf);
  }
  return res;
}

tuple<int, string> extraction(const string &line) {
  vector<string> splitted = split(line, ' ');
  int year = stoi(splitted[0]);
  string medal = splitted[splitted.size() - 1];
  return tie(year, medal);
}

int ans(map<int, int> const &years) {
  int max_count = 0;
  for (auto &item : years) {
    max_count = max(max_count, item.second);
  }

  int early_year = 2022;
  for (auto &item : years) {
    if (item.second == max_count) {
      early_year = min(early_year, item.first);
    }
  }
  return early_year;
}

int main() {
  FastIO;

  string line;
  while (getline(cin, line)) {
    if (line == "0") return 0;
    int n = stoi(line);
    map<int, int> golds, years;

    for (int i = 0; i < n; ++i) {
      getline(cin, line);

      auto [year, medal] = extraction(line);
      if (medal == "Gold") golds[year]++;
      years[year]++;
    }

    cout << ans(golds) << ' ' << ans(years) << '\n';
  }
}
