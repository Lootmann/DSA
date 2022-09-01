#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

string lower(string s) {
  string res;
  for (const auto ch : s) {
    if ('a' <= ch && ch <= 'z') {
      res.push_back(ch);
    } else {
      res.push_back(ch - 'A' + 'a');
    }
  }
  return res;
}

string title(string s) {
  string res;

  for (size_t i = 0; i < s.size(); i++) {
    if (i == 0)
      res.push_back(s.at(i) - 'a' + 'A');
    else
      res.push_back(s.at(i));
  }

  return res;
}

vector<string> split(string s) {
  vector<string> res;
  size_t prev{0}, next{0};

  for (size_t i = 0; i < s.size(); i++) {
    if (s.at(i) == '_') {
      next = i;
      res.emplace_back(lower(s.substr(prev, next - prev)));
      prev = ++next;
    } else if (i != 0 && isupper(s.at(i))) {
      next = i;
      res.emplace_back(lower(s.substr(prev, next - prev)));
      prev = next;
    }
  }
  res.emplace_back(lower(s.substr(prev)));

  return res;
}

string convert(vector<string> s, string type) {
  string res{};

  if (type == "D") {
    for (size_t i = 0; i < s.size(); i++) {
      res += s.at(i);
      if (i != s.size() - 1) res += "_";
    }
  } else if (type == "U") {
    for (const auto word : s) {
      res += title(word);
    }
  } else {
    for (size_t i = 0; i < s.size(); i++) {
      if (i == 0)
        res += s.at(i);
      else
        res += title(s.at(i));
    }
  }

  return res;
}

void solve() {
  string name, type;
  while (cin >> name >> type) {
    if (name == "EndOfInput") return;

    auto res = split(name);
    cout << convert(res, type) << '\n';
  }
}

int main() {
  FastIO;
  solve();
}
