#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int ans{0};

  for (size_t i = 0; i < s.size() - 1; i++) {
    if (s[i] == 'O' && s[i + 1] == 'X') {
      ans++;
      i++;
    } else if (s[i] == 'X' && s[i + 1] == 'O') {
      ans++;
      i++;
    }
  }

  cout << ans << '\n';
}
