#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> A(n), B(n);

  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;

  map<int, int> mpa, mpb;

  for (size_t i = 0; i < A.size(); i++) {
    mpa[A[i]] = i;
    mpb[B[i]] = i;
  }

  int match{0};
  for (size_t i = 0; i < A.size(); i++) {
    if (A[i] == B[i]) match++;
  }

  int contains{0};
  for (const auto key : mpa) {
    if (mpb.find(key.first) != mpb.end()) {
      // position
      if (key.second != mpb[key.first]) {
        contains++;
      }
    }
  }

  cout << match << '\n';
  cout << contains << '\n';
}

int main() {
  FastIO;
  solve();
}
