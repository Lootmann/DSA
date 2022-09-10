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

  int bottom() {
    return bottom_;
  }

  int front() {
    return front_;
  }

  int rear() {
    return rear_;
  }

  int right() {
    return right_;
  }

  int left() {
    return left_;
  }

  void roll_n() {
    int tmp = top_;
    top_ = front_;
    front_ = bottom_;
    bottom_ = rear_;
    rear_ = tmp;
  }

  void roll_s() {
    int tmp = top_;
    top_ = rear_;
    rear_ = bottom_;
    bottom_ = front_;
    front_ = tmp;
  }

  void roll_e() {
    int tmp = top_;
    top_ = left_;
    left_ = bottom_;
    bottom_ = right_;
    right_ = tmp;
  }

  void roll_w() {
    int tmp = top_;
    top_ = right_;
    right_ = bottom_;
    bottom_ = left_;
    left_ = tmp;
  }

  void rotate_left() {
    int tmp = front_;
    front_ = right_;
    right_ = rear_;
    rear_ = left_;
    left_ = tmp;
  }

  void rotate_right() {
    int tmp = front_;
    front_ = left_;
    left_ = rear_;
    rear_ = right_;
    right_ = tmp;
  }

  void rolling(char direction) {
    if (direction == 'N') {
      roll_n();
    } else if (direction == 'S') {
      roll_s();
    } else if (direction == 'E') {
      roll_e();
    } else if (direction == 'W') {
      roll_w();
    }
  }
};

ostream &operator<<(ostream &os, const Dice &d) {
  return os << ' ' << d.top_ << '\n'
            << d.left_ << d.front_ << d.right_ << d.rear_ << '\n'
            << ' ' << d.bottom_;
}

int main() {
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  Dice dice(a, b, c, d, e, f);

  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {
    int top, front;
    cin >> top >> front;

    if (dice.left() == top) dice.roll_e();
    if (dice.right() == top) dice.roll_w();

    while (dice.top() != top) dice.roll_s();
    while (dice.front() != front) dice.rotate_left();

    cout << dice.right() << '\n';
  }
}
