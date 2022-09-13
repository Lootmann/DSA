#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  int n, k, a;
  cin >> n >> k >> a;

  while (k--) {
    if (n + 1 == a) a = 1;
    a++;
  }

  cout << a - 1 << '\n';
}
