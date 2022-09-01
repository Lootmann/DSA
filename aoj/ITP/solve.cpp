#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

using vi = vector<int>;

double manhattan(vi x, vi y) {
  double sum{0.0};
  for (size_t i = 0; i < x.size(); i++) {
    sum += abs(x[i] - y[i]);
  }
  return sum;
}

double euclidean(vi x, vi y) {
  double sum{0.0};
  for (size_t i = 0; i < x.size(); i++) {
    sum += pow((x[i] - y[i]), 2.0);
  }
  return sqrt(sum);
}

double p3(vi x, vi y) {
  double sum{0.0};
  for (size_t i = 0; i < x.size(); i++) {
    sum += pow(abs(x[i] - y[i]), 3.0);
  }
  return cbrt(sum);
}

double chebyshev(vi x, vi y) {
  double maxv{0.0};
  for (size_t i = 0; i < x.size(); i++) {
    double diff = abs(x[i] - y[i]);
    if (diff > maxv) maxv = diff;
  }
  return maxv;
}

void solve() {
  int n;
  cin >> n;

  vi x(n), y(n);
  for (auto &xi : x) cin >> xi;
  for (auto &yi : y) cin >> yi;

  cout << fixed << setprecision(6);
  cout << manhattan(x, y) << '\n';
  cout << euclidean(x, y) << '\n';
  cout << p3(x, y) << '\n';
  cout << chebyshev(x, y) << '\n';
}

int main() {
  FastIO;
  solve();
}
