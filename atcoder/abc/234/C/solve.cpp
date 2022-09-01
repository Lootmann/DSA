#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int k;
  cin >> k;

  vector<int> bits;
  while (k != 0) {
    if (k % 2 == 0) {
      bits.emplace_back(0);
    } else {
      bits.emplace_back(2);
    }

    k /= 2;
  }

  for (int i = (int)bits.size() - 1; i >= 0; i--) {
    cout << bits.at(i);
  }
  cout << '\n';
}
