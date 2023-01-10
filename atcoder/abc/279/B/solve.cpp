#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
using namespace std;

int main() {
  FastIO;
  string s, t;
  cin >> s >> t;

  if (s.find(t) != string::npos) {
    cout << "Yes" << '\n';
  } else {
    cout << "No" << '\n';
  }
}
