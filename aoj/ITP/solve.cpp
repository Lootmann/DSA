#include <bits/stdc++.h>
using namespace std;

class Dice {
public:
  int top_, front_, right_, left_, rear_, bottom_;

  Dice(int a, int b, int c, int d, int e, int f)
      : top_(a), front_(b), right_(c), left_(d), rear_(e), bottom_(f) {}

  int top() {
    return top_;
  }

  void rolling(char direction) {
    if (direction == 'N') {
      // fixed pos: right, left
      int tmp = top_;
      top_ = front_;
      front_ = bottom_;
      bottom_ = rear_;
      rear_ = tmp;

    } else if (direction == 'S') {
      // fixed pos: right, left
      int tmp = top_;
      top_ = rear_;
      rear_ = bottom_;
      bottom_ = front_;
      front_ = tmp;

    } else if (direction == 'E') {
      // fixed pos: front, rear
      int tmp = top_;
      top_ = left_;
      left_ = bottom_;
      bottom_ = right_;
      right_ = tmp;
    } else if (direction == 'W') {
      // fixed pos: front, rear
      int tmp = top_;
      top_ = right_;
      right_ = bottom_;
      bottom_ = left_;
      left_ = tmp;
    }
  }
};

int main() {
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  Dice dice(a, b, c, d, e, f);

  string s;
  cin >> s;

  for (const auto& ch : s) {
    dice.rolling(ch);
  }

  cout << dice.top() << '\n';
}
