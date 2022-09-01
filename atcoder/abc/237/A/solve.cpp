#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n;
  cin >> n;

  long long int minv = -(1LL << 31);
  long long int maxv = (1LL << 31) - 1;

  if (minv <= n && n <= maxv) {
    cout << "Yes" << '\n';
  } else {
    cout << "No" << '\n';
  }
}
