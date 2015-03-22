//  =============== BEGIN ASSESSMENT HEADER ================
/// @file hello_world.cpp
/// @brief assignment00/Hello World
///
/// @author Test Student [RSubEmail@ucr.edu]
/// @date May 1, 2014
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>

using namespace std;
bool  isLeap( unsigned y ) 
{
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 ==0))
    return true;
    else
    return false;
}

int main() 
{
    cout <<isLeap (2004);
    cout << "Hello World!" << endl;
    return 0;
}