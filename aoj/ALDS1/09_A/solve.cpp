#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int parent(int i) {
  return i / 2;
}

int left(int i) {
  return 2 * i;
}

int right(int i) {
  return 2 * i + 1;
}

int main() {
  int n;
  cin >> n;

  vector<int> heap(n + 1);
  heap[0] = -1;
  rep(i, n) cin >> heap[i + 1];

  for (int i = 1; i <= n; i++) {
    int parent_key = parent(i);
    int left_key = left(i);
    int right_key = right(i);

    cout << "node " << i << ": key = " << heap.at(i) << ", ";

    if (0 < parent_key && parent_key <= n + 1) {
      cout << "parent key = " << heap.at(parent_key) << ", ";
    }

    if (left_key <= n) {
      cout << "left key = " << heap.at(left_key) << ", ";
    }

    if (right_key <= n) {
      cout << "right key = " << heap.at(right_key) << ", ";
    }
    cout << '\n';
  }
}
