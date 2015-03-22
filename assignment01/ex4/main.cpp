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


#include <cstdlib>

#include <ctime>
#include <cmath>

using namespace std;


double randFloat (double a, double b)

{

   return a + (static_cast<double>(rand()) / RAND_MAX) * (b - a);

}

double rand_mv(double mean, double var)
{
    double A =0.0;
    double B = 0.0;
    B= mean + (sqrt(var*12))/ 2;
    A = mean - (sqrt(var*12)) /2;
    
    
    cout << A <<' ' <<B << endl;
    return randFloat(A,B);
}
int main() 
{
    srand(time(0));
    double mean =0.0;
    double variance =0.0;
    
    cout <<"Enter Mean: ";
    cin >> mean;
    cout << endl;
    cout <<"Enter Variance ";
    cin >> variance;
    cout << endl;
    cout << rand_mv(mean, variance);

    return 0;
}