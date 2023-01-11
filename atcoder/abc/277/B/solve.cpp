#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

bool is_mark(char ch) {
  return ch == 'H' || ch == 'D' || ch == 'C' || ch == 'S';
}

bool is_num(char ch) {
  string num = "A23456789TJQK";
  return num.find(ch) != string::npos;
}

int main() {
  FastIO;

  set<string> st;
  bool is_dup{true};

  int n;
  cin >> n;

  rep(_, n) {
    string mark;
    cin >> mark;

    if (!is_mark(mark[0]) && !is_num(mark[1])) {
      is_dup = false;
      break;
    }

    if (st.find(mark) != st.end()) {
      is_dup = false;
      break;
    }

    st.insert(mark);
  }

  if (is_dup) {
    cout << "Yes" << '\n';
  } else {
    cout << "No" << '\n';
  }
}
