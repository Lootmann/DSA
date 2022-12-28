#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;
using llint = long long int;

struct Cheese {
  llint tasty, weight;
  Cheese(int t, int w) : tasty(t), weight(w) {}
};

bool comp(const Cheese &a, const Cheese &b) {
  return a.tasty > b.tasty;
}

int main() {
  llint n, w;
  cin >> n >> w;

  vector<Cheese> cheeses;

  rep(i, n) {
    llint tasty, weight;
    cin >> tasty >> weight;
    cheeses.emplace_back(Cheese(tasty, weight));
  }

  sort(cheeses.begin(), cheeses.end(), comp);

  llint total_tasty{0};

  for (const auto &ch : cheeses) {
    total_tasty += ch.tasty * min(w, ch.weight);
    w -= min(w, ch.weight);
  }

  cout << total_tasty << '\n';
}
