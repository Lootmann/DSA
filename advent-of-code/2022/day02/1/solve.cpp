#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int battle(string opponent, string me) {
  int result = 0;

  if (me == "X")
    result += 1;
  else if (me == "Y")
    result += 2;
  else
    result += 3;

  if (me == "X") {
    if (opponent == "A")
      result += 3;
    else if (opponent == "C")
      result += 6;
    else
      result += 0;
  }

  if (me == "Y") {
    if (opponent == "B")
      result += 3;
    else if (opponent == "A")
      result += 6;
    else
      result += 0;
  }

  if (me == "Z") {
    if (opponent == "C")
      result += 3;
    else if (opponent == "B")
      result += 6;
    else
      result += 0;
  }

  return result;
}

int main() {
  FastIO;

  int score{};
  string opponent, me;

  while (cin >> opponent >> me) {
    /* cout << opponent << ' ' << me << '\n'; */
    score += battle(opponent, me);
  }

  cout << score << '\n';
}
