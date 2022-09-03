#include <bits/stdc++.h>
using namespace std;

struct Cell {
  int num;
  bool is_marked{false};

  Cell(int n) : num(n) {}
};

using Table = vector<vector<Cell>>;

vector<int> chosen_number(const string &numbers) {
  vector<int> chosen;
  string tmp{};

  for (size_t i = 0; i <= numbers.size(); i++) {
    if (i == numbers.size()) {
      chosen.emplace_back(stoi(tmp));
      break;
    }

    if (numbers[i] == ',') {
      chosen.emplace_back(stoi(tmp));
      tmp = "";
    } else {
      tmp += numbers[i];
    }
  }

  return chosen;
}

void marked_bingo(Table &table, const int chose_num) {
  for (vector<Cell> &line : table) {
    for (Cell &cell : line) {
      if (cell.num == chose_num) {
        cell.is_marked = true;
        return;
      }
    }
  }
}

vector<Table> get_bingo_table() {
  vector<Table> bingos;

  int num;
  Table table;
  vector<Cell> line;

  while (cin >> num) {
    line.emplace_back(Cell(num));

    if (line.size() == 5) {
      table.emplace_back(line);
      line.clear();
    }

    if (table.size() == 5) {
      bingos.emplace_back(table);
      table.clear();
    }
  }

  return bingos;
}

bool checked_bingo(const Table &table) {
  // horizontal
  for (size_t i = 0; i < table.size(); i++) {
    bool all_marked = true;
    for (size_t j = 0; j < table[0].size(); j++) {
      if (not table[i][j].is_marked) {
        all_marked = false;
      }
    }

    if (all_marked) return true;
  }

  // vertical
  for (size_t i = 0; i < table[0].size(); i++) {
    bool all_marked = true;
    for (size_t j = 0; j < table.size(); j++) {
      if (not table[j][i].is_marked) {
        all_marked = false;
      }
    }
    if (all_marked) return true;
  }

  return false;
}

auto show_bingo_table = [](const Table &table) {
  for (const auto &line : table) {
    for (const auto &cell : line) {
      if (cell.is_marked) {
        cout << "[x]";
      } else {
        cout << "[ ]";
      }
      cout << cell.num << ' ';
    }
    cout << '\n';
  }
};

int calc_sum(const Table &table) {
  int sum{0};

  for (size_t i = 0; i < table.size(); i++) {
    for (size_t j = 0; j < table[0].size(); j++) {
      if (not table[i][j].is_marked) {
        sum += table[i][j].num;
      }
    }
  }

  return sum;
}

int main() {
  string numbers;
  cin >> numbers;

  const vector<int> chosen = chosen_number(numbers);
  vector<Table> bingos = get_bingo_table();

  size_t bingo_table_idx{0};
  int bingo_chosen_number{0};
  bool is_bingo = false;

  for (const int &num : chosen) {
    for (size_t i = 0; i < bingos.size(); i++) {
      marked_bingo(bingos[i], num);
    }

    for (size_t i = 0; i < bingos.size(); i++) {
      if (checked_bingo(bingos[i])) {
        bingo_table_idx = i;
        bingo_chosen_number = num;
        is_bingo = true;
        break;
      }
    }

    if (is_bingo) {
      break;
    }
  }

  /* for (size_t i = 0; i < bingos.size(); i++) { */
  /*   cout << ">>> " << i << '\n'; */
  /*   show_bingo_table(bingos[i]); */
  /*   cout << '\n'; */
  /* } */

  // calc answer
  int sum = calc_sum(bingos[bingo_table_idx]);

  cout << sum * bingo_chosen_number << '\n';
}
