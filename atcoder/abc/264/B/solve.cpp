#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  FastIO;
  int r, c;
  cin >> r >> c;
  int max_dist = max(abs(r - 8), abs(c - 8));

  if (max_dist % 2 == 1) {
    cout << "black" << '\n';
  } else {
    cout << "white" << '\n';
  }
}
