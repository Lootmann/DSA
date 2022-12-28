#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  int first, last, current;
  cin >> first >> last >> current;

  current++;

  /*
   * | ... first -- last ...
   * */
  if (first < last) {
    if (first < current && current < last) {
      cout << "Yes" << '\n';
    } else {
      cout << "No" << '\n';
    }
  } else {
    /*
     * | -- last ... first -- |
     * */
    if (first < current || current < last) {
      cout << "Yes" << '\n';
    } else {
      cout << "No" << '\n';
    }
  }

  return 0;
}
