#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  double d;
  cin >> d;

  int last = (int)(d * 10) % 10;

  if (last >= 5) {
    cout << int(d) + 1 << '\n';
  } else {
    cout << int(d) << '\n';
  }
}
