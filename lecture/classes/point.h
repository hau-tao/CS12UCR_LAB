#ifndef _POINT_H_
#define _POINT_H_

class Point {
    private:
        double x;
        double y;
    public:
        /* Constructors */
        Point();
        Point(double new_x,double new_y);
        Point* operator=(const Point& p2);

        /* Mutators */
        Point* operator+=(double scalar);
        Point operator+(double scalar);
        Point operator+(const Point& p2);
        void set_x(double new_x);
        void set_y(double new_y);
        void move_by(double delta_x,double delta_y);
        void move_to(double new_x,double new_y);

        /* Accessors */
        double get_x() const;
        double get_y() const;
        void display() const;
};

#endif //_POINT_H_
