#include "rectangle.h"

Rectangle::Rectangle() : length(0.0),width(0.0) { }

Rectangle::Rectangle(const Point& new_lower_left,double new_length,double new_width)
    : lower_left(new_lower_left),length(new_length),width(new_width) {
    if (width <= 0 || length <= 0) {
        lower_left.move_to(0.0,0.0);
        width = length = 0.0;
    }
}

Rectangle::Rectangle(const Point& new_lower_left,const Point& upper_right) 
    : lower_left(new_lower_left),
    length(upper_right.get_x() - new_lower_left.get_x()),
    width(upper_right.get_y() - new_lower_left.get_y()) {
    if (width <= 0 || length <= 0) {
        lower_left.move_to(0.0,0.0);
        width = length = 0.0;
    }
}

void Rectangle::move_to(double new_x,double new_y) {
    lower_left.move_to(new_x,new_y);
}

void Rectangle::move_by(double delta_x,double delta_y) {
    lower_left.move_by(delta_x,delta_y);
}

double Rectangle::perimeter() const {
    return 2*length + 2*width;
}

double Rectangle::area() const {
    return length * width;
}

