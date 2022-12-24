#include <bits/stdc++.h>
using namespace std;

int main() {
  int current;
  cin >> current;

  int ans{0};
  int next;
  while (cin >> next) {
    if (current < next) ans++;
    current = next;
  }

  cout << ans << '\n';
}
