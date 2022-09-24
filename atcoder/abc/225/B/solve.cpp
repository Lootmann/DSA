#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  // HERE COMES A PAIN
  FastIO;
  int n;
  cin >> n;

  vector<int> edges(n, 0);

  rep(_, n - 1) {
    int a, b;
    cin >> a >> b;

    edges[--a]++;
    edges[--b]++;
  }

  bool is_star = false;

  for (const auto &num : edges) {
    if (num == n - 1) is_star = true;
  }

  if (is_star)
    cout << "Yes" << '\n';
  else
    cout << "No" << '\n';
}
