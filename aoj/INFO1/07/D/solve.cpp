#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int x;
  cin >> x;

  if (x >= 80)
    cout << "A";
  else if (x >= 65)
    cout << "B";
  else if (x >= 50)
    cout << "C";
  else if (x >= 35)
    cout << "D";
  else
    cout << "F";
  cout << endl;
}

int main() {
  FastIO;
  solve();
}
