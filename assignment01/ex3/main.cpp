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

using namespace std;
const int ARRAY1=500;
const int ARRAY2=500;

double randFloat (double a, double b)

{

   return a + (static_cast<double>(rand()) / RAND_MAX) * (b - a);

}
int main() 
{
    srand(time(0));
    
    double a =-3;
    double b = 3;
    double array1 [ARRAY1];
    double array2 [ARRAY2];
    double theoretical_mean_1 =0.0; 
    double theoretical_variance_1=0.0; 
    double practical_mean_1 =0.0; 
    double practical_variance_1 =0.0;  
    double sum1=0.0;
    double sum_variance1 = 0.0; 
    theoretical_mean_1 = (a+b)/2;
    theoretical_variance_1 = (a-b)*(a-b)/ 12;
    for ( unsigned i =0; i<ARRAY1;++i)
    {
        array1[i] = randFloat(a,b);
        sum1 += array1[i];
        
    }
    practical_mean_1 = sum1/ ARRAY1;
    for (unsigned i =0; i< ARRAY1; ++i)
    {
        sum_variance1 += ((array1[i]-practical_mean_1) *(array1[i]-practical_mean_1) );
    }
    practical_variance_1 = sum_variance1 / ARRAY1;
    
    cout << "The output would be:"
    <<theoretical_mean_1<<' ' << practical_mean_1 <<' '<<theoretical_variance_1 
    <<' '<< practical_variance_1 << endl;
    
    sum1 =0;
    sum_variance1 =0;
    a=-7;
    b= -1;
    for ( unsigned i =0; i<ARRAY2;++i)
    {
        array2[i] = randFloat(a,b);
        sum1 += array2[i];
        
    }
    practical_mean_1 = sum1/ ARRAY2;
    theoretical_variance_1 = (a-b)*(a-b)/ 12;
    theoretical_mean_1 = (a+b)/2;
    for (unsigned i =0; i< ARRAY2; ++i)
    {
        sum_variance1 += ((array2[i]-practical_mean_1) *(array2[i]-practical_mean_1) );
    }
    practical_variance_1 = sum_variance1 / ARRAY2;
    
    cout << "The output would be:"
    <<theoretical_mean_1<<' ' << practical_mean_1 <<' '<<theoretical_variance_1 
    <<' '<< practical_variance_1 << endl;
    
    
    
    
    
    
    
    
  

    return 0;
}