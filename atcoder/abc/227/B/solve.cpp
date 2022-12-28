#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int surface(int a, int b) {
  return 4 * a * b + 3 * a + 3 * b;
}

int main() {
  int n;
  cin >> n;

  vector<int> S(n);
  for (int i = 0; i < n; i++) {
    cin >> S[i];
  }

  set<int> surfaces;
  for (int a = 1; a < 1000; a++) {
    for (int b = 1; b < 1000; b++) {
      surfaces.insert(surface(a, b));
    }
  }

  int fallacy{0};
  for (const auto &s : S) {
    if (surfaces.find(s) == surfaces.end()) {
      fallacy++;
    }
  }

  cout << fallacy << '\n';
}
