#include <bits/stdc++.h>
using namespace std;

struct Treasure {
  int amount;
  int maxw;
  Treasure(int a, int m) : amount(a), maxw(m) {}
};

void solve(int n) {
  vector<Treasure> treasures;

  for (int i = 0; i < n; i++) {
    int treasure, amount;
    cin >> treasure >> amount;
    treasures.emplace_back(Treasure(treasure, amount));
  }

  sort(treasures.begin(), treasures.end(),
       [](const Treasure &a, const Treasure &b) { return a.maxw < b.maxw; });

  int current{0};
  for (const auto &treasure : treasures) {
    current += treasure.amount;
    if (treasure.maxw < current) {
      cout << "No" << '\n';
      return;
    }
  }
  cout << "Yes" << '\n';
}

int main() {
  int n;

  while (cin >> n) {
    if (n == 0) break;
    solve(n);
  }
}
