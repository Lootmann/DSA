#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, required;
  cin >> a >> b >> required;

  int coin{0};
  int day{0};

  while (required > coin) {
    coin += a;
    day++;

    if (day % 7 == 0) {
      coin += b;
    }
  }

  cout << day << '\n';
}
