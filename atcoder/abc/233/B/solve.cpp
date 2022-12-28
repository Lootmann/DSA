#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, r;
  cin >> l >> r;
  l--, r--;

  string s;
  cin >> s;

  for (int i = 0; i < l; i++) {
    cout << s.at(i);
  }

  for (int i = r; i >= l; i--) {
    cout << s.at(i);
  }

  for (int i = r + 1; i < (int)s.size(); i++) {
    cout << s.at(i);
  }
  cout << '\n';
}
