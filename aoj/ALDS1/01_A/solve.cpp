#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

auto print = [](const vector<int> &vi) {
  for (size_t i = 0; i < vi.size(); i++) {
    cout << vi.at(i);
    cout << (i != vi.size() - 1 ? ' ' : '\n');
  }
};

void insertionSort(vector<int> &vi) {
  for (size_t i = 0; i < vi.size(); i++) {
    int v = vi[i];
    int j = i - 1;

    while (j >= 0 && vi[j] > v) {
      vi[j + 1] = vi[j];
      j--;
    }

    vi[j + 1] = v;

    print(vi);
  }
}

int main() {
  int n;
  cin >> n;

  vector<int> vi(n);
  for (auto &v : vi) cin >> v;

  insertionSort(vi);
}
