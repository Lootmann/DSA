#include <bits/stdc++.h>
using namespace std;

struct Point {
  int x, y;
  Point(int x_, int y_) {
    x = x_;
    y = y_;
  }
};

long long int dist(const Point &a, const Point &b) {
  return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int main() {
  int n;
  cin >> n;

  vector<Point> vp;

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    vp.emplace_back(Point(x, y));
  }

  long long int d{0};
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      d = max(d, dist(vp[i], vp[j]));
    }
  }

  cout << fixed << setprecision(10) << sqrt(static_cast<double>(d)) << '\n';
}
