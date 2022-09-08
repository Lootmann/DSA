#include <bits/stdc++.h>
using namespace std;

auto print = [](vector<int> vi) {
  for (const auto v : vi) cout << ' ' << v;

  cout << '\n';
};

int main() {
  int n, coupon, discount;
  cin >> n >> coupon >> discount;

  vector<int> vi(n);
  for (auto &v : vi) cin >> v;

  sort(vi.begin(), vi.end(), greater<int>());

  for (size_t i = 0; i < vi.size(); i++) {
  }

  print(vi);
}
