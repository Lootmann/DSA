#include "./include/point.hpp"
using std::cout;
using std::endl;

int main() {
  Point v(1, 2);
  cout << v << endl;

  Point p1(1, 2);
  cout << "p1 = " << p1 << endl;

  Point p2(2, 3);
  cout << "p1 + p2 = " << p1 + p2 << endl;
}
