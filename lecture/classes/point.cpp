#include "point.h"
#include <iostream>

using std::cout;

/* Constructors */
Point::Point() { 
    x = 0.0;
    y = 0.0;
}
Point::Point(double new_x,double new_y) {
    x = new_x;
    y = new_y;
}
Point* Point::operator=(const Point& p2) {
    x = p2.x;
    y = p2.y;
    return this;
}

/* Mutators */
Point* Point::operator+=(double scalar) { 
    x = x + scalar;
    y = y + scalar;
    return this;
}

Point Point::operator+(double scalar) { 
    Point sum;
    sum.set_x(x + scalar);
    sum.set_y(y + scalar);
    return sum;
}
Point Point::operator+(const Point& p2) {
    Point sum;
    sum.set_x(x + p2.x);
    sum.set_y(y + p2.y);
    return sum;
}
void Point::set_x(double new_x) { x = new_x; }
void Point::set_y(double new_y) { y = new_y; }
void Point::move_to(double new_x,double new_y) {
    x = new_x;
    y = new_y;
}
void Point::move_by(double delta_x,double delta_y) {
    x += delta_x;
    y += delta_y;
}

/* Accessors */
double Point::get_x() const { return x; }
double Point::get_y() const { return y; }
void Point::display() const {
    cout << '(' << x << ',' << y << ')';
}
