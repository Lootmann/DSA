#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

void solve() {
  string input;

  while (getline(cin, input)) {
    if (input == "END OF INPUT") break;

    int score{0};

    for (size_t i = 0; i <= input.size(); i++) {
      if (i == input.size()) {
        cout << score;
      } else if (input.at(i) == ' ') {
        if (score == 0) {
          cout << '0';
        } else {
          cout << score;
          score = 0;
        }
      } else {
        score++;
      }
    }  // while

    cout << '\n';
  }
}

int main() {
  FastIO;
  solve();
}
