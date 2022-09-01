#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int first = int(s[0] - '0');
  int second = int(s[1] - '0');
  int third = int(s[2] - '0');

  int ans = 0;
  ans += 100 * first + 10 * second + third;
  ans += 100 * second + 10 * third + first;
  ans += 100 * third + 10 * first + second;
  cout << ans << '\n';
}
