#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int x;
  cin >> x;

  if (x < 0 && x % 10 != 0)
    cout << x / 10 - 1 << '\n';
  else
    cout << x / 10 << '\n';
}
