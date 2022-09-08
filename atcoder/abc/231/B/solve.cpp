#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<string, int> candidates;

  for (int i = 0; i < n; i++) {
    string name;
    cin >> name;

    candidates[name]++;
  }

  string name{};
  int maxv{0};

  for (const auto &key : candidates) {
    if (maxv < key.second) {
      maxv = key.second;
      name = key.first;
    }
  }

  cout << name << '\n';
}
