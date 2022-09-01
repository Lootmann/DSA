#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<string> stations(n);
  for (auto &s : stations) cin >> s;

  set<string> express;
  for (int i = 0; i < m; i++) {
    string name;
    cin >> name;
    express.insert(name);
  }

  for (const auto &name : stations) {
    if (express.find(name) != express.end()) {
      cout << "Yes" << '\n';
    } else {
      cout << "No" << '\n';
    }
  }
}
