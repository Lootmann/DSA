#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  FastIO;
  int n;
  cin >> n;

  string s;
  cin >> s;

  bool is_closed = false;

  rep(i, n) {
    if (s[i] == '"') {
      cout << s[i];
      is_closed = !is_closed;
    } else if (s[i] == ',') {
      cout << (is_closed ? "," : ".");
    } else {
      cout << s[i];
    }
  }
  cout << '\n';
}
