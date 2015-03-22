// =============== BEGIN ASSESSMENT HEADER ================
/// @file main.cpp
/// @brief Lab for CS 12 <Spring 2014>
///
/// @author htao001 [htao001@ucr.edu]
/// @date Aug 21,2014
///
/// @par Enrollment Notes
/// Lecture Section: <e.g. 001>
/// @par
/// Lab Section: <e.g. 021>
/// @par
/// TA: Juan Leon
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
// ================== END ASSESSMENT HEADER ===============

#include "IntList.h"
#include <iostream>

using namespace std;

int main()
{
    IntList l1;
    l1.display(); cout << endl;
    l1.push_front(3);
    l1.display(); cout << endl;
    l1.push_front(1);
    l1.display(); cout << endl;
    l1.pop_front();
    l1.display(); cout << endl;
    l1.displayreversely();
    return 0;
}