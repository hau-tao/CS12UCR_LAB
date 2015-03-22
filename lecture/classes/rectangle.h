#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "point.h"

class Rectangle {
    private:
        Point lower_left;
        double length;
        double width;
    public:
        /* Constructors */
        Rectangle();
        Rectangle(const Point& new_lower_left,double new_length,double new_width);
        Rectangle(const Point& new_lower_left,const Point& upper_right);

        /* Mutators */
        void move_to(double new_x,double new_y);
        void move_by(double delta_x,double delta_y);

        /* Accessors */
        double perimeter() const;
        double area() const;
};

#endif //_RECTANGLE_H_
