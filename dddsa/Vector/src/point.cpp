#include "../include/point.hpp"

#include <cmath>

#define EPS (1e-10)

Point Point::operator+(const Point &p) {
  return Point(this->x + p.x, this->y + p.y);
}

Point Point::operator-(const Point &p) {
  return Point(this->x - p.x, this->y - p.y);
}

Point Point::operator*(const Point &p) {
  return Point(this->x * p.x, this->y * p.y);
}

bool Point::operator<(const Point &p) const {
  if (this->x != p.x)
    return this->x < p.x;
  else
    return this->y < p.y;
}

bool Point::operator==(const Point &p) const {
  return fabs(this->x - p.x) < EPS && fabs(this->y - p.y) < EPS;
}

double Point::norm() const {
  return this->x * this->x + this->y * this->y;
}

double Point::abs() const {
  return sqrt(this->norm());
}

std::ostream &operator<<(std::ostream &os, const Point &p) {
  return os << p.x << ' ' << p.y;
}
