#include <bits/stdc++.h>
using namespace std;

long int col2int(string col) {
  auto ch2int = [](char ch) { return (int)(ch - 'A' + 1); };

  long int num{};

  if (col.size() == 1) {
    num += ch2int(col[0]);
  } else {
    num += ch2int(col[0]) * 26;
    num += ch2int(col[1]);
  }

  return num;
}

int main() {
  string c1, c2;
  long int r1, r2;

  cin >> c1 >> r1 >> c2 >> r2;

  long int cc1 = col2int(c1);
  long int cc2 = col2int(c2);

  cout << (r2 - r1 + 1) * (cc2 - cc1 + 1) << '\n';
}
