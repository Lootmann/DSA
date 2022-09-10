#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;
using tpl = tuple<int, int, int, int>;

class Dice {
public:
  int top_, front_, right_, left_, rear_, bottom_;

  Dice(int a, int b, int c, int d, int e, int f)
      : top_(a), front_(b), right_(c), left_(d), rear_(e), bottom_(f) {}

  void roll_n() {
    tie(top_, front_, bottom_, rear_) = tpl{front_, bottom_, rear_, top_};
  }

  void roll_s() {
    tie(top_, front_, bottom_, rear_) = tpl{rear_, bottom_, front_, top_};
  }

  void roll_e() {
    tie(top_, left_, bottom_, right_) = tpl{left_, bottom_, right_, top_};
  }

  void roll_w() {
    tie(top_, left_, bottom_, right_) = tpl{right_, top_, left_, bottom_};
  }

  void rotate_left() {
    tie(front_, right_, rear_, left_) = tpl{right_, rear_, left_, front_};
  }

  void rotate_right() {
    tie(front_, right_, rear_, left_) = tpl{left_, rear_, right_, front_};
  }
};

ostream &operator<<(ostream &os, const Dice &d) {
  return os << ' ' << d.top_ << '\n'
            << d.left_ << d.front_ << d.right_ << d.rear_ << '\n'
            << ' ' << d.bottom_;
}

bool match(Dice &d1, Dice &d2) {
  return d1.top_ == d2.top_ && d1.bottom_ == d2.bottom_ &&
         d1.right_ == d2.right_ && d1.left_ == d2.left_ &&
         d1.front_ == d2.front_ && d1.rear_ == d2.rear_;
}

bool is_same_dice(Dice d1, Dice d2) {
  rep(i, 4) {
    d2.rotate_left();
    if (match(d1, d2)) return true;
  }

  d2.roll_n();
  rep(i, 4) {
    d2.roll_w();
    rep(j, 4) {
      d2.rotate_left();
      if (match(d1, d2)) return true;
    }
  }

  d2.roll_n();
  if (d1.top_ == d2.top_) {
    for (int i = 0; i < 4; i++) {
      d2.rotate_left();
      if (match(d1, d2)) return true;
    }
  }

  return false;
}

Dice getDice() {
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  return Dice(a, b, c, d, e, f);
}

int main() {
  int n;
  cin >> n;

  vector<Dice> dices;
  rep(i, n) dices.emplace_back(getDice());

  rep(i, n) reps(j, n, i + 1) {
    if (is_same_dice(dices[i], dices[j])) {
      cout << "No" << '\n';
      return 0;
    }
  }

  cout << "Yes" << '\n';
  return 0;
}
