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
    int height;
    cin >> height;
    heights[i] = height;
  }

  // O(n)
  sort(heights.begin(), heights.end());

  int maxv = (int)heights.size();

  // O(q)
  for (int i = 0; i < q; i++) {
    int height;
    cin >> height;

    int idx = l_bound(heights, height);
    cout << maxv - idx << '\n';
  }
}
