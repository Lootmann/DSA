#include <iostream>
#include <set>
#include <stdexcept>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

class File {
private:
  string m_filename;
  size_t m_filesize;

public:
  File(string, size_t);
  size_t size() const;
  string filename() const;
};

class Dir {
private:
  Dir *parent;
  string m_dirname;

public:
  Dir(string);

  vector<Dir *> m_dirs;
  vector<File *> m_files;

  void appendFile(string, size_t);
  void appendDir(string);

  string getDirname() const;
  Dir *getDirpath(string) const;
  Dir *getParent();
  vector<Dir *> getDirs() const;
  vector<File *> getFiles() const;
};

void traverse(const Dir *, int);
void show_indent(int, char);
