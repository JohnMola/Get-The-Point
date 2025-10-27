#pragma once

#include <iostream>
#include <string>

class Point {
private:
    double x;
    double y;

public:
    Point(double x, double y) : x(x), y(y) {}

    double operator-(Point p1) const;
    int operator==(Point p1) const;
    int operator!=(Point p1) const;
    Point operator/(Point p1) const;
    friend std::ostream& operator<<(std::ostream& os, Point p1);

    [[nodiscard]] double get_x() const {return x;}
    [[nodiscard]] double get_y() const {return y;}
};