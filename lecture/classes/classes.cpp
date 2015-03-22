#include <iostream>
#include "point.h"
#include "rectangle.h"

using std::endl;
using std::cout;

int main() {
    // Create a point 'p'
    Point p;
    // Display the point 'p', showing the default constructor
    cout << "p: ";
    p.display();
    cout << endl;

    // Create a second point 'q' using the second constructor
    Point q = Point(3.45,4.12);
    // Display the point 'q'
    cout << "q: ";
    q.display();
    cout << endl;

    // Move the point 'q' by (1,-1)
    cout << "q: ";
    q.display();
    cout << " + (1,-1)";
    q.move_to(1,-1);
    // Display the resulting point
    cout << " = ";
    q.display();
    cout << endl;

    // Move the point 'p' by (-1.5,2.5)
    p.move_to(-1.5,2.5);
    // Display the resulting point
    cout << "p: ";
    p.display();
    cout << endl;

    cout << "p + q: ";
    p.display();
    cout << " + ";
    q.display(); 
    cout << " = ";
    //These would do the same thing. 
    //(p+q).display();
    //Point s(p+q);
    Point s;
    s = p+q;
    s.display();
    cout << endl;

    Point t = s;
    t.display();
    cout << endl;
    t += 4;
    t.display();
    cout << endl;
    s.display();
    cout << endl;

    // Creating a rectangle at point 'q' of length 2 and width 3 
    Rectangle r1 = Rectangle(q,2,3);
    Rectangle r2 = Rectangle();
    
    cout << "Creating a rectangle at ";
    q.display();
    cout << " with length 2 and width 3" << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;
    cout << "Area: " << r1.area() << endl;

    return 0;
}
