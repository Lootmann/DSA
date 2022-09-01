#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  map<int, vector<int>> mp;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    mp[num].emplace_back(i + 1);
  }

  for (int i = 0; i < q; i++) {
    size_t x, k;
    cin >> x >> k;

    if (mp.find(x) != mp.end() && k <= mp[x].size()) {
      cout << mp[x][k - 1] << '\n';
    } else {
      cout << -1 << '\n';
    }
  }
}
