#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
#define MOD 998244353;
using namespace std;

int main() {
  FastIO;

  long long int n;
  cin >> n;

  n %= MOD;
  if (n < 0) n += MOD;
  cout << n << '\n';
}
