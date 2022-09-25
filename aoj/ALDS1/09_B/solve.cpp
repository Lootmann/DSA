#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

void maxHeapify(vector<int> &heap, int idx) {
  int left = 2 * idx, right = 2 * idx + 1, largest = 0;

  if (left <= (int)heap.size() - 1 && heap[left] > heap[idx])
    largest = left;
  else
    largest = idx;

  if (right <= (int)heap.size() - 1 && heap[right] > heap[largest]) {
    largest = right;
  }

  if (largest != idx) {
    int tmp = heap[largest];
    heap[largest] = heap[idx];
    heap[idx] = tmp;

    maxHeapify(heap, largest);
  }
}

void buildMaxHeap(vector<int> &A) {
  for (int i = A.size() / 2; i >= 1; i--) {
    maxHeapify(A, i);
  }
}

int main() {
  FastIO;

  int h;
  cin >> h;

  vector<int> heap(h + 1);

  for (int i = 1; i <= h; i++) {
    cin >> heap[i];
  }

  buildMaxHeap(heap);

  for (int i = 1; i <= h; i++) {
    cout << ' ' << heap[i];
  }
  cout << '\n';
}
