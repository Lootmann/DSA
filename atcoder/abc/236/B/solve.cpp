#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  unordered_map<int, int> mp;
  for (int i = 0; i < 4 * n - 1; i++) {
    int num;
    cin >> num;
    mp[num]++;
  }

  for (const auto el : mp) {
    if (el.second == 3) {
      cout << el.first << '\n';
    }
  }
}
