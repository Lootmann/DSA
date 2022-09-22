#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using llint = long long int;

llint trib(vector<llint> &vi, llint n) {
  if (n == 0) return vi[0] = 0;
  if (n == 1) return vi[1] = 0;
  if (n == 2) return vi[2] = 1;
  if (vi[n] != -1) return vi[n];

  for (int i = 3; i <= n; i++) {
    vi[i] = vi[i - 1] + vi[i - 2] + vi[i - 3];
  }

  return vi[n];
}

int main() {
  int n;
  cin >> n;

  vector<llint> vi(n + 1, -1);
  rep(i, n + 1) {
    cout << trib(vi, i) << '\n';
  }
}
