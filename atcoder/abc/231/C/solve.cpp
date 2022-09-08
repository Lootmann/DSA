#include <bits/stdc++.h>
using namespace std;

int l_bound(const vector<int> &vi, int height) {
  int left = -1, right = (int)vi.size();

  while (right - left > 1) {
    int mid = (left + right) / 2;

    if (vi[mid] >= height) {
      right = mid;
    } else {
      left = mid;
    }
  }

  return right;
}

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> heights(n);

  // O(N)
  for (int i = 0; i < n; i++) {
    cin >> heights[i];
  }

  // O(n)
  sort(heights.begin(), heights.end());

  // O(q)
  for (int i = 0; i < q; i++) {
    int height;
    cin >> height;

    cout << n - l_bound(heights, height) << '\n';
  }
}
