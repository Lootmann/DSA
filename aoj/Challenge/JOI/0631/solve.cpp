#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define VPair vector<pair<int, int>>
using namespace std;

VPair get_input(int m) {
  vector<pair<int, int>> lots(m);
  rep(i, m) {
    cin >> lots[i].first >> lots[i].second;
  }
  sort(lots.begin(), lots.end(), greater<pair<int, int>>());

  return lots;
};

void solve() {
  int n, m;
  cin >> n >> m;

  VPair lots = get_input(m);
  int ans{0}, need{m - 1};

  for (auto &lot : lots) {
    if (need == 0) break;

    if (lot.first >= n) {
      need--;
    } else {
      ans += n - lot.first;
      need--;
    }
  }

  cout << ans << '\n';
}

int main() {
  FastIO;
  solve();
}
