#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  int n, first;
  cin >> n >> first;

  vector<int> friends{0};
  vector<bool> known(n + 1, false);

  rep(i, n) {
    int other;
    cin >> other;
    friends.emplace_back(other);
  }

  int next = first;

  while (true) {
    known[next] = true;
    next = friends[next];

    if (known[next]) {
      break;
    }
  }

  int count{0};
  for (const auto &k : known) {
    if (k) count++;
  }

  cout << count << '\n';
}
