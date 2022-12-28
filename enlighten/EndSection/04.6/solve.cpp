#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

auto print = [](vector<vector<int>> &A) {
  cout << "* memo" << '\n';

  cout << "   ";
  for (size_t i = 0; i < A[0].size(); i++) {
    if (i < 10)
      cout << "  " << i;
    else
      cout << " " << i;
  }

  cout << '\n';

  for (size_t i = 0; i < A.size(); i++) {
    if (i < 10)
      cout << ' ' << i << ' ';
    else
      cout << i << ' ';
    for (size_t j = 0; j < A[0].size(); j++) {
      if (A[i][j] == 1) cout << "  1";
      if (A[i][j] == 0) cout << "  0";
      if (A[i][j] == -1) cout << "  .";
    }
    cout << '\n';
  }
};

int func(int i, int w, const vector<int> &a, vector<vector<int>> &memo) {
  if (i == 0) {
    return w == 0;
  }

  if (memo[i][w] != -1) return memo[i][w];
  if (func(i - 1, w, a, memo)) return memo[i][w] = 1;
  if (func(i - 1, w - a[i - 1], a, memo)) return memo[i][w] = 1;

  return memo[i][w] = 0;
}

int main() {
  int n, w;
  cin >> n >> w;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  vector<vector<int>> memo(n + 1, vector<int>(w + 1, -1));

  if (func(n, w, A, memo) == 1)
    cout << "Yes" << '\n';
  else
    cout << "No" << '\n';

  print(memo);
}
