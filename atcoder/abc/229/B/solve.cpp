#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  bool has_carry = false;

  size_t length = min(a.size(), b.size());
  size_t diff = max(a.size(), b.size()) - length;

  for (int i = (int)length - 1; i >= 0; i--) {
    int digita = int(a[i] - '0');
    int digitb = int(b[i + diff] - '0');

    if (digita + digitb >= 10) {
      has_carry = true;
    }
  }

  if (has_carry) {
    cout << "Hard" << '\n';
  } else {
    cout << "Easy" << '\n';
  }
}
