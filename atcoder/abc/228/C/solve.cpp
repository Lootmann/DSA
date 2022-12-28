#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

auto print = [](vector<int> vi) {
  for (size_t i = 0; i < vi.size(); i++) {
    cout << i << ' ' << vi.at(i) << '\n';
  }
  cout << '\n';
};

int kth_point(vector<int> points, int k) {
  sort(points.begin(), points.end(), greater<int>());
  return points[k - 1];
}

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> points(n, 0);

  rep(i, n) rep(_, 3) {
    int point;
    cin >> point;
    points[i] += point;
  }

  int kth = kth_point(points, k);

  for (const int &p : points) {
    if (kth <= p + 300) {
      cout << "Yes" << '\n';
    } else {
      cout << "No" << '\n';
    }
  }
}
