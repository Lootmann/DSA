#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string target{"oxxoxxoxxoxxoxxoxxoxx"};

  if (target.find(s) != string::npos) {
    cout << "Yes" << '\n';
  } else {
    cout << "No" << '\n';
  }
}
