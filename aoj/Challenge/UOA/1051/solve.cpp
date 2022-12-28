#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &vi) {
  if (vi.size() == 1) {
    cout << vi.front();
  } else {
    cout << vi.front() << '-' << vi.back();
  }

  vi = vector<int>{};
}

vector<int> pages;

void solve(int n) {
  for (int i = 0; i < n; i++) {
    int page;
    cin >> page;

    if (pages.empty()) {
      pages.emplace_back(page);
    } else if (pages.back() + 1 == page) {
      pages.emplace_back(page);
    } else {
      print(pages);
      cout << ' ';

      pages.clear();
      pages.emplace_back(page);
    }
  }

  print(pages);
  cout << '\n';
}

int main() {
  int n;

  while (cin >> n) {
    if (n == 0) break;
    solve(n);
  }
}
