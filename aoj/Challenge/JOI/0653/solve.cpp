#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> pieces(n);
  for (auto &p : pieces) cin >> p;

  int m;
  cin >> m;
  vector<int> positions(m);

  for (size_t i = 0; i < positions.size(); i++) {
    int pos;
    cin >> pos;
    positions[i] = pos - 1;
  }

  for (const int &pos : positions) {
    if (pieces[pos] < 2019) {
      if (pieces[pos] + 1 != pieces[pos + 1]) {
        pieces[pos]++;
      }
    }
  }

  for (const auto &p : pieces) {
    cout << p << '\n';
  }
}
