#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  int n;
  cin >> n;
  set<string> lines;

  rep(_, n) {
    string line;
    getline(cin, line);
    lines.insert(line);
  }

  cout << lines.size() << '\n';
}
