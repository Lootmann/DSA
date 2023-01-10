#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
using namespace std;

int main() {
  FastIO;
  string s, t;
  cin >> s >> t;

  size_t left{0}, right{0};
  while (true) {
    if (s[left] != t[right]) {
      break;
    }
    left++, right++;
  }

  cout << left + 1 << '\n';
}
