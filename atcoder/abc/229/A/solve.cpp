#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  int dot_count =
      count(s1.begin(), s1.end(), '.') + count(s2.begin(), s2.end(), '.');

  if (dot_count >= 3) {
    cout << "Yes" << '\n';
    return 0;
  }

  if ((s1[0] == '.' && s2[1] == '.') || (s1[1] == '.' && s2[0] == '.')) {
    cout << "No" << '\n';
    return 0;
  }

  cout << "Yes" << '\n';
  return 0;
}
