#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vi;
  int num;

  while (cin >> num) {
    vi.emplace_back(num);
  }

  vector<int> windows;
  for (size_t i = 0; i < vi.size() - 2; i++) {
    windows.emplace_back(vi.at(i) + vi.at(i + 1) + vi.at(i + 2));
  }

  int ans{0};
  for (size_t i = 0; i < windows.size() - 1; i++) {
    if (windows.at(i) < windows.at(i + 1)) ans++;
  }
  cout << ans << '\n';
}
