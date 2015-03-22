//  =============== BEGIN ASSESSMENT HEADER ================
/// @file ex1.cpp
/// @brief ex1
///
/// @author HAU TAO [taoquanghau@gmail.com]
/// @date Jan 8, 2014
//  ================== END ASSESSMENT HEADER ===============
// This program implements the Monte Carlo Method for estimating the value of PI. 

   

#include <iostream> 

#include <cstdlib>

#include <ctime>

#include <cmath> 
using namespace std; 

   

// given the coordinates of a point (x,y) computes if the point is inside the circle 

// centered at origin with radius R. Returns 'true' if it is inside, 'false' otherwise.
bool is_inside(float x, float y, float R)
{
       if( x*x + y*y < R*R)
       return true;
       else
       return false;
    
}

// given the side,s, of a square that is centered at origin, 

// chooses a random coordinates inside the square, and calls is_inside function 

// to test if the point is inside the circle or not.
bool throw_dart(int s)
{
    int x, y; 
    x = rand() % (s +1) - s/2;
    y = rand() % (s +1) - s/2;
    // see the previous exercise to see an example. 
    //Call the is_inside function and return its output.
    return is_inside(x, y, s/2);

}
int main()
{ 
    int side = 1000; // this is the side of the square and is also our resolution. 
    int tries;  // this is the number of tries.
    //Ask the user for the number of tries using cout.
    //Get the users input using cin. 
    cout << "Input the number of tries";
    cin >> tries;
    int in_count = 0; //counter to track number of throws that fall inside 
    for(int i = 0; i < tries; i++)
    {
        if (throw_dart(side))
        {
            ++ in_count;
        }
    }
    float Pi;
    Pi = (4.0 * in_count) / tries; 
    cout <<"Estimated Pi " << Pi << endl;
    return 0;
    
}