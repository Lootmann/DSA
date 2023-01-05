#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
using namespace std;

int main() {
  FastIO;

  long long int n, t;
  cin >> n >> t;

  vector<long long int> A(n);
  long long int sum{};

  for (auto &a : A) {
    cin >> a;
    sum += a;
  }

  long long int circle = t % sum;
  long long int current = 0;

  for (int i = 0; i < n; i++) {
    if (current + A[i] > circle) {
      cout << i + 1 << ' ' << circle - current << '\n';
      return 0;
    }
    current += A[i];
  }
}
