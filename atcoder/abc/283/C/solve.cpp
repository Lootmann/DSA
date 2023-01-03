#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  FastIO;

  string s;
  cin >> s;

  int ans{};
  int zero_count{};
  for (size_t i = 0; i < s.size(); ++i) {
    if (s[i] == '0') {
      zero_count++;
    } else {
      ans++;
      ans += (zero_count + 1) / 2;
      zero_count = 0;
    }
  }

  ans += (zero_count + 1) / 2;
  cout << ans << '\n';
}
