#include <bits/stdc++.h>
using namespace std;

int main() {
  string op;
  int x;

  int position{0}, depth{0};
  while (cin >> op >> x) {
    if (op == "forward") {
      position += x;
    }

    if (op == "down") {
      depth += x;
    }

    if (op == "up") {
      depth -= x;
    }
  }

  cout << position * depth << '\n';
}
