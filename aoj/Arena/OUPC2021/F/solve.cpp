#include <bits/stdc++.h>
using namespace std;

int count(const string &name1, const string &name2) {
  int cnt{0};

  for (size_t i = 0; i < name1.size(); i++) {
    if (name1[i] != name2[i]) {
      cnt++;
    }
  }

  return cnt;
}

int main() {
  int n;
  cin >> n;

  vector<string> names(n);
  for (auto &name : names) cin >> name;

  vector<bool> cheaters(n, false);

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (count(names[i], names[j]) <= 1) {
        cheaters[i] = true;
        cheaters[j] = true;
      }
    }
  }

  int ans{0};
  for (const auto &c : cheaters) {
    if (c) ans++;
  }
  cout << ans << '\n';
}
