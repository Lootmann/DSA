#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  FastIO;
  string s;
  cin >> s;

  int count{};

  for (auto &ch : s) {
    if (ch == 'v')
      count += 1;
    else
      count += 2;
  }

  cout << count << '\n';
}
