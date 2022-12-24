#include <bits/stdc++.h>
using namespace std;

/*
- forward 5 adds 5 to your horizontal position, a total of 5.
  Because your aim is 0, your depth does not change.

- down 5 adds 5 to your aim, resulting in a value of 5.

- forward 8 adds 8 to your horizontal position, a total of 13.
  Because your aim is 5, your depth increases by 8*5=40.

- up 3 decreases your aim by 3, resulting in a value of 2.

- down 8 adds 8 to your aim, resulting in a value of 10.

- forward 2 adds 2 to your horizontal position, a total of 15.
  Because your aim is 10, your depth increases by 2*10=20 to a total of 60.
*/
int main() {
  string op;
  int x;

  int position{0}, depth{0}, aim{0};
  while (cin >> op >> x) {
    if (op == "forward") {
      position += x;
      depth += aim * x;
    }

    if (op == "down") {
      aim += x;
    }

    if (op == "up") {
      aim -= x;
    }
  }

  cout << position * depth << '\n';
}
