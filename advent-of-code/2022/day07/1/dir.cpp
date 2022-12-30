#include "dir.hpp"

/***********
 * File
 ***********/
File::File(string filename, size_t filesize)
    : m_filename{filename}, m_filesize{filesize} {}

size_t File::size() const {
  return m_filesize;
}

string File::filename() const {
  return m_filename;
}

/***********
 * Dir
 ***********/
Dir::Dir(string dirname) : m_dirname{dirname} {}

void Dir::appendFile(string name, size_t filesize) {
  File *new_file = new File(name, filesize);
  m_files.emplace_back(new_file);
}

void Dir::appendDir(string name) {
  Dir *new_dir = new Dir(name);
  new_dir->parent = this;
  m_dirs.emplace_back(new_dir);
}

Dir *Dir::getDirpath(string path) const {
  for (auto const &dir : m_dirs) {
    if (dir->m_dirname == path) {
      return dir;
    }
  }
  throw invalid_argument("wrong path");
}

Dir *Dir::getParent() {
  return parent;
}

/***********
 * Util
 ***********/
string Dir::getDirname() const {
  return m_dirname;
}

vector<Dir *> Dir::getDirs() const {
  return m_dirs;
}

vector<File *> Dir::getFiles() const {
  return m_files;
}

void show_indent(int indent) {
  if (indent == 0) return;
  for (int i = 0; i < indent; ++i) {
    cout << ' ';
  }
}

void traverse(const Dir *dir, int indent) {
  if (dir == nullptr) return;

  show_indent(indent);
  cout << "- " << dir->getDirname() << " (dir)" << '\n';

  for (auto f : dir->getFiles()) {
    show_indent(indent + 2);
    cout << "- " << f->filename() << "(" << f->size() << ")" << '\n';
  }

  for (auto d : dir->getDirs()) {
    traverse(d, indent + 2);
  }
}
