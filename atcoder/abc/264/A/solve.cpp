#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  FastIO;
  int l, r;
  cin >> l >> r;
  string atcoder = "atcoder";
  cout << atcoder.substr(l - 1, r - l + 1) << '\n';
}
