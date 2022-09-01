#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> A{0};
  int cur_degree{0};

  for (int i = 0; i < n; i++) {
    int degree;
    cin >> degree;

    cur_degree = (cur_degree + degree) % 360;
    A.emplace_back(cur_degree);
  }

  sort(A.begin(), A.end());

  int max_deg{0};
  for (size_t i = 1; i < A.size(); i++) {
    max_deg = max(max_deg, A[i] - A[i - 1]);
  }
  max_deg = max(max_deg, 360 - A.back());

  cout << max_deg << '\n';
}
