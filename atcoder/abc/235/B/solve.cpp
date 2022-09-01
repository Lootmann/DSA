#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> H(n);
  for (auto &h : H) cin >> h;

  int current_height = H.front();

  for (size_t i = 1; i < H.size(); i++) {
    if (current_height < H[i]) {
      current_height = H[i];
    } else {
      break;
    }
  }

  cout << current_height << '\n';
}
