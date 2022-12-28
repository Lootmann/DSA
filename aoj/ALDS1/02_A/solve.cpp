#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int bubble_sort(vector<int> &vi) {
  int count{0};
  bool is_sorted = true;

  while (is_sorted) {
    is_sorted = false;

    for (int i = (int)vi.size() - 1; i >= 0; i--) {
      if (vi[i] < vi[i - 1]) {
        int tmp = vi[i];
        vi[i] = vi[i - 1];
        vi[i - 1] = tmp;

        is_sorted = true;
        count++;
      }
    }
  }

  return count;
}

int main() {
  int n;
  cin >> n;

  vector<int> vi(n);
  for (auto &v : vi) cin >> v;

  int count = bubble_sort(vi);

  for (size_t i = 0; i < vi.size(); i++) {
    cout << vi[i] << (i != vi.size() - 1 ? ' ' : '\n');
  }
  cout << count << '\n';
}
