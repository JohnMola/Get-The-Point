#include "point.hpp"
#include <cmath>

double Point::operator-(Point p1) const {
   return sqrt(pow(x - p1.x, 2) + pow(y - p1.y, 2));
}

int Point::operator==(Point p1) const {
   return x == p1.get_x() && y == p1.get_y();
}

int Point::operator!=(Point p1) const {
   return x != p1.get_x() || y != p1.get_y();
}

Point Point::operator/(Point p1) const {
   return Point((x+p1.get_x())/2, (y+p1.get_y())/2);
}

std::ostream& operator<<(std::ostream& os, const Point& p1) {
   os << "(" << p1.get_x() << ", " << p1.get_y() << ")";
   return os;
}
