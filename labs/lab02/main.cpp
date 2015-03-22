//  =============== BEGIN ASSESSMENT HEADER ================
/// @file ex1.cpp
/// @brief ex1
///
/// @author HAU TAO [taoquanghau@gmail.com]
/// @date Jan 15, 2014
//  ================== END ASSESSMENT HEADER ===============
// c strings strcat function

#include <iostream>

#include <cstdlib>

#include <ctime>
using namespace std;
void mystrcat( char destination[], const char source[] )
{
    int length_des =0;
    //int length_source =0;
    for ( unsigned  i=0; destination[i] != '\0'; ++i)
    {
        ++length_des;
    }
    /*for( unsigned i =0; source[i] != '\0';++i)
    {
        ++length_source;
    }*/
    //cout <<"length_des is " << length_des << endl;
    //cout <<"length_source is "<<length_source<<endl;
    //destination[length_des]= source[0];
    for ( unsigned int i =0; source[i] != '\0'; ++i)
    {
        
        destination[length_des]= source[i];
        ++length_des;
        
    }
    destination[length_des]= '\0';
    
    cout << destination <<endl;
    
}

int main()
{
    char mySource[100]="p";
    char myDes[100] = "ypj";
    mystrcat(myDes, mySource);
    
    
    return 0;

}