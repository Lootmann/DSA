#include <bits/stdc++.h>
using namespace std;

using llint = long long int;

llint dist(const llint x1, const llint y1, const llint x2, const llint y2) {
  return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main() {
  llint x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  bool exists = false;
  for (llint x = -2; x <= 2; x++) {
    for (llint y = -2; y <= 2; y++) {
      llint dist1 = dist(x1, y1, x1 + x, y1 + y);
      llint dist2 = dist(x2, y2, x1 + x, y1 + y);

      exists |= (dist1 == 5 && dist2 == 5);
    }
  }

  if (exists) {
    cout << "Yes" << '\n';
  } else {
    cout << "No" << '\n';
  }
}
