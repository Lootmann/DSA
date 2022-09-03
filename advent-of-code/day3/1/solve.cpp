#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> noises;

  string input;
  while (cin >> input) {
    noises.emplace_back(input);
  }

  string gamma{}, epsilon{};

  for (size_t x = 0; x < noises.front().size(); x++) {
    size_t count_1{0};

    for (size_t y = 0; y < noises.size(); y++) {
      if (noises[y][x] == '1') count_1++;
    }

    if (count_1 > noises.size() / 2) {
      gamma += '1';
      epsilon += '0';
    } else {
      gamma += '0';
      epsilon += '1';
    }
  }

  size_t power_consumption = stoi(gamma, 0, 2) * stoi(epsilon, 0, 2);
  cout << power_consumption << '\n';
}
