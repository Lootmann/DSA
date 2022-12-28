#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

int main() {
  string fields;
  cin >> fields;

  stack<int> heights;
  stack<pair<int, int>> res;
  int sum{0};

  for (int i = 0; i < (int)fields.size(); i++) {
    char ch = fields.at(i);

    if (ch == '\\') {
      heights.push(i);
    } else {
      if (not heights.empty()) {
        int j = heights.top();
        heights.pop();

        int area = i - j;
        sum += area;

        while (true) {
          if (not res.empty()) {
            auto p = res.top();
            res.pop();

            if (j < p.first) {
              area += p.second;
            } else {
              res.push(make_pair(p.first, p.second));
              break;
            }
          } else {
            break;
          }
        }  // while
        res.push(make_pair(j, area));
      }
    }
  }

  cout << sum << '\n';

  cout << endl;
}
