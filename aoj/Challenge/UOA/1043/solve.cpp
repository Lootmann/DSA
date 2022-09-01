#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

struct Team {
  int id, u, a, p;
  Team(int _i, int _u, int _a, int _p) : id(_i), u(_u), a(_a), p(_p) {}
};

bool comp(Team const &a, Team const &b) {
  if (a.a > b.a) return true;
  if (a.a < b.a) return false;
  if (a.p < b.p) return true;
  if (a.id < b.id) return true;
  return false;
}

void solve(int n) {
  vector<Team> vt;

  rep(_, n) {
    int i, u, a, p;
    cin >> i >> u >> a >> p;
    vt.emplace_back(Team{i, u, a, p});
  }

  sort(vt.begin(), vt.end(), &comp);

  int total_selection{0};
  vector<int> current_selection(1001, 0);

  for (auto &team : vt) {
    if (total_selection < 10) {
      if (current_selection[team.u] < 3) {
        cout << team.id << '\n';
        current_selection[team.u]++;
        total_selection++;
      }
    }

    else if (total_selection < 20) {
      if (current_selection[team.u] < 2) {
        cout << team.id << '\n';
        current_selection[team.u]++;
        total_selection++;
      }
    }

    else if (total_selection < 26) {
      if (current_selection[team.u] < 1) {
        cout << team.id << '\n';
        current_selection[team.u]++;
        total_selection++;
      }
    }
  }
}

int main() {
  FastIO;

  int t;
  while (cin >> t) {
    if (t == 0) break;
    solve(t);
  }
}
