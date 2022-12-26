#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int priority(char type) {
  if ('a' <= type && type <= 'z') return type - 'a' + 1;
  if ('A' <= type && type <= 'Z') return type - 'A' + 27;
  throw std::invalid_argument("Can't recognize type char");
}

map<char, int> count_char(string item) {
  map<char, int> mp;
  for (auto &ch : item) {
    if (mp.find(ch) != mp.end()) {
      mp[ch]++;
    } else {
      mp[ch] = 1;
    }
  }
  return mp;
}

int calc_priority(map<char, int> first, map<char, int> second) {
  // share char
  for (auto &key : first) {
    if (second.find(key.first) != second.end()) {
      return priority(key.first);
    }
  }

  // unique char
  for (auto &key : first) {
    if (second.find(key.first) == second.end()) {
      return priority(key.first);
    }
  }

  for (auto &key : second) {
    if (first.find(key.first) == first.end()) {
      return priority(key.first);
    }
  }

  throw std::invalid_argument("wrong calc_priprity algo");
}

auto print = [](map<char, int> item) {
  for (auto &key : item) {
    cout << '{' << key.first << ' ' << key.second << "} ";
  }
  cout << '\n';
};

void solve() {
  string item;

  int sum{};

  while (cin >> item) {
    size_t size = item.size();

    auto first = count_char(item.substr(0, size / 2));
    auto second = count_char(item.substr(size / 2));

    int current = calc_priority(first, second);
    sum += current;
  }

  cout << sum << '\n';
}

int main() {
  FastIO;
  solve();
}
