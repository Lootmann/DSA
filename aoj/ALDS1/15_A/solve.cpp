#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int exchange(int &money, int weight) {
  int count = money / weight;
  money %= weight;
  return count;
}

int main() {
  int n;
  cin >> n;

  int count{0};
  count += exchange(n, 25);
  count += exchange(n, 10);
  count += exchange(n, 5);
  count += n;

  cout << count << '\n';
}
