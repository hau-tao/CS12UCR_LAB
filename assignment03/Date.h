//  =============== BEGIN ASSESSMENT HEADER ================
/// @file main.cpp
/// @brief assignment03/main.cpp
///
/// @author HAU TAO [taoquanghau@gmail.com]
/// @date Feb 1, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
// Date class
#include <iostream>

#ifndef  DATE_H
#define  DATE_H

using namespace std;
class Date
{
    private:
        unsigned day;
        unsigned month;
        string monthName;
        unsigned year;
        bool isLeap( unsigned ) const;
        unsigned daysPerMonth( unsigned m, unsigned y ) const;
        string name( unsigned m ) const;
        unsigned number( const string &mn ) const;
        
    public:
        Date();
        Date( unsigned m, unsigned d, unsigned y );
        Date( const string &mn, unsigned d, unsigned y );
        void printNumeric( )  const;
        void printAlpha( )  const;
        
};

#endif 

