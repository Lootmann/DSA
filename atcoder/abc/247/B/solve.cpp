#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

struct Name {
  string firstname;
  string lastname;

  Name(string fname, string lname) : firstname(fname), lastname(lname) {}
};

void solve() {
  int n;
  cin >> n;

  vector<Name> names;

  rep(_, n) {
    string s, t;
    cin >> s >> t;
    names.emplace_back(Name{s, t});
  }

  rep(i, n) {
    bool is_unique = false;
    for (auto const name : vector<string>{names[i].firstname, names[i].lastname}) {
      bool is_dup = true;

      rep(j, n) {
        if (i != j) {
          if (name == names[j].firstname || name == names[j].lastname) {
            is_dup = false;
          }
        }
      }

      if (is_dup) is_unique = true;
    }

    if (!is_unique) {
      cout << "No" << '\n';
      return;
    }
  }  // rep

  cout << "Yes" << '\n';
}

int main() {
  FastIO;
  solve();
}
