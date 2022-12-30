#include "dir.hpp"

vector<string> getLines() {
  vector<string> terminals{};
  string line;
  while (getline(cin, line)) {
    terminals.emplace_back(line);
  }
  return terminals;
}

int total_size(Dir *dir, int size) {
  if (dir == nullptr) return 0;

  size_t total{};
  for (auto f : dir->m_files) total += f->size();
  for (auto d : dir->m_dirs) total += total_size(d, size);
  return total;
}

void ans(Dir *dir) {
  if (dir == nullptr) return;

  cout << "dir: " << dir->getDirname() << '(' << total_size(dir, 0) << ")\n";
  for (auto d : dir->getDirs()) ans(d);
}

int main() {
  Dir *root = new Dir("/");
  Dir *current = root;

  vector<string> terminals = getLines();

  for (size_t i = 0; i < terminals.size(); ++i) {
    auto t = terminals[i];

    // cd
    if (t.substr(2, 2) == "cd") {
      auto idx = t.rfind(' ');
      string path = t.substr(idx + 1);

      if (path == "/") {
      } else if (path == "..") {
        current = current->getParent();
      } else {
        current = current->getDirpath(path);
      }

    } else if (t.substr(2, 2) == "ls") {
      // ls info
      while (true) {
        i++;
        if (terminals.size() == i) break;

        if (terminals[i][0] == '$') {
          i--;
          break;
        }

        auto idx = terminals[i].find(' ');
        string left = terminals[i].substr(0, idx);
        string right = terminals[i].substr(idx + 1);

        if (left == "dir") {
          current->appendDir(right);
        } else {
          current->appendFile(right, stoll(left));
        }
      }  // while
    }    // for
  }

  cout << ">>> traverse" << '\n';
  traverse(root, 0);

  cout << "\n>>> total_size\n";
  ans(root);
}
