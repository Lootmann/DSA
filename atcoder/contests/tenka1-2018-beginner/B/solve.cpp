#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void process(long long int &cookie) {
  if (cookie % 2 != 0) cookie -= 1;
}

void solve() {
  long long int a, b, k;
  cin >> a >> b >> k;

  while (true) {
    if (k-- == 0) break;
    process(a);
    b += a / 2;
    a /= 2;

    if (k-- == 0) break;
    process(b);
    a += b / 2;
    b /= 2;
  }

  cout << a << ' ' << b << '\n';
}

int main() {
  FastIO;
  solve();
}
