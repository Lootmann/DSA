#include <iostream>
#include <ostream>

struct Point {
  double x, y;
  Point(double _x = 0.0, double _y = 0.0) : x(_x), y(_y) {}

  Point operator+(const Point &p);
  Point operator-(const Point &p);
  Point operator*(const Point &p);

  bool operator<(const Point &p) const;
  bool operator==(const Point &p) const;

  double norm() const;
  double abs() const;

  friend std::ostream &operator<<(std::ostream &os, const Point &p);
};
