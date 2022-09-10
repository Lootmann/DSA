#include <bits/stdc++.h>
using namespace std;

string int2str(long int num) {
  if (num == 0) return "0";

  string str{};
  while (num > 0) {
    if (num % 2)
      str = "1" + str;
    else
      str = "0" + str;
    num /= 2;
  }
  return str;
}

int main() {
  long int a, b;
  cin >> a >> b;

  string a_bit = int2str(a);
  string b_bit = int2str(b);

  int diff = abs((int)a_bit.size() - (int)b_bit.size());

  while (diff--) {
    b_bit = "0" + b_bit;
  }

  int count{0};
  for (size_t i = 0; i < a_bit.size(); i++) {
    if (a_bit[i] == b_bit[i])
      count++;
    else
      break;
  }
  cout << count << '\n';
}
