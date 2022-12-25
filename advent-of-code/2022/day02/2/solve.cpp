#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  FastIO;

  string opponent, me;
  int total = 0;

  while (cin >> opponent >> me) {
    int result = 0;
    int hand = 0;

    // X: should lose
    if (me == "X") {
      result = 0;
      if (opponent == "A") hand = 3;
      if (opponent == "B") hand = 1;
      if (opponent == "C") hand = 2;
    }

    // Y: draw
    if (me == "Y") {
      result = 3;
      if (opponent == "A") hand = 1;
      if (opponent == "B") hand = 2;
      if (opponent == "C") hand = 3;
    }

    // Z: should win
    if (me == "Z") {
      result = 6;
      if (opponent == "A") hand = 2;
      if (opponent == "B") hand = 3;
      if (opponent == "C") hand = 1;
    }

    total += result + hand;
  }

  cout << total << '\n';
}
