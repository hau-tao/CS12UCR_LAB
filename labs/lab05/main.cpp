//  =============== BEGIN ASSESSMENT HEADER ================
/// @file main.cpp
/// @brief  main
///
/// @author HAU TAO [taoquanghau@gmail.com]
/// @date Feb 5, 2014
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include "Distance.h"
using namespace std;

int main()

{

  Distance d1;

  cout << "d1: ";

  d1.display(); cout << endl;

  Distance d2 = Distance(2,5.9);

  Distance d3 = Distance(3.75);

  cout << "d2: "; d2.display(); cout << endl;

  cout << "d3: "; d3.display(); cout << endl;

  //test init helper function

  Distance d4 = Distance(5, -19.34);

  Distance d5 = Distance(100);

  cout << "d4: "; d4.display(); cout << endl;

  cout << "d5: "; d5.display(); cout << endl;

  //test add (<12 inches)

  cout << "d4 + d5: "; (d4 + d5).display(); cout << endl;

  //test add (>12 inches)

  cout << "d2 + d4: "; (d2 + d4).display(); cout << endl;

  //test sub (0 ft)

  cout << "d3 - d1: "; (d3 - d1).display(); cout << endl;

  //test sub (0 ft, negative conversion)

  cout << "d1 - d3: "; (d1 - d3).display(); cout << endl;

  //test sub (positive ft & inch)

  cout << "d4 - d2: "; (d4 - d2).display(); cout << endl;

  //test sub (negative ft & inch)

  cout << "d2 - d4: "; (d2 - d4).display(); cout << endl;

  //test sub (negative ft, positive inch)

  cout << "d4 - d5: "; (d4 - d5).display(); cout << endl;

  //test sub (positive ft, negative inch)

  cout << "d5 - d2: "; (d5 - d2).display(); cout << endl;

  //add more tests of your own ...

  return 0;

}