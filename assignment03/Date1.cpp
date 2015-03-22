#include <iostream>
#include "Date.h"

Date:: Date()
{
    monthName = "January";
    day = 1;
    year = 2000;
    month = 1;
}
bool Date:: isLeap( unsigned y ) const
{
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 ==0))
    return true;
    else
    return false;
}
unsigned Date:: daysPerMonth( unsigned m, unsigned y ) const
{
    unsigned d;
    if (isLeap(y))
    {
        if (m==1)
        d = 31;
        else if(m==2)
        d = 29;
        else if (m==3)
        d =31;
        else if (m==4)
        d = 30;
        else if(m==5)
        d =31;
        else if(m==6)
        d = 30;
        else if (m==7)
        d = 31;
        else if (m==8)
        d =31;
        else if (m==9)
        d = 30;
        else if (m==10)
        d = 31;
        else if (m==11)
        d =30;
        else if (m==12)
        d = 31;
        
    }
    else if (!isLeap(y))
    {
        if (m==1)
        d = 31;
        else if(m==2)
        d = 28;
        else if (m==3)
        d =31;
        else if (m==4)
        d = 30;
        else if(m==5)
        d =31;
        else if(m==6)
        d = 30;
        else if (m==7)
        d = 31;
        else if (m==8)
        d =31;
        else if (m==9)
        d = 30;
        else if (m==10)
        d = 31;
        else if (m==11)
        d =30;
        else if (m==12)
        d = 31;
    }
    
    return d;
}

string Date:: name( unsigned m ) const
{
    string month_Name;
    if ( m<=1)
    month_Name = "January";
    else if ( m==2 )
    month_Name = "February";
    else if ( m==3)
    month_Name = "March";
    else if ( m==4 )
    month_Name = "April";
    else if ( m==5)
    month_Name = "May";
    else if ( m==6 )
    month_Name = "June";
    else if ( m==7)
    month_Name = "July";
    else if ( m==8 )
    month_Name = "August";
    else if ( m==9)
    month_Name = "September";
    else if ( m==10 )
    month_Name = "October";
    else if ( m==11)
    month_Name = "November";
    else if ( m>=12 )
    month_Name = "December";
    return month_Name;
}
unsigned Date :: number( const string &mn ) const
{
    unsigned m;
    if ( mn == "January" || mn == "january")
    m = 1;
    else if (mn=="February"|| mn=="february")
    m =2;
    else if (mn == "March"|| mn =="march")
    m =3;
    else if (mn=="April"|| mn== "april")
    m =4;
    else if (mn == "May"|| mn=="may" )
    m =5;
    else if (mn=="June"|| mn =="june")
    m =6;
    else if (mn == "July"|| mn =="july")
    m =7;
    else if (mn=="August"|| mn =="august")
    m =8;
    else if (mn == "September"|| mn=="september")
    m =9;
    else if (mn=="October"|| mn =="october")
    m =10;
    else if (mn == "November"|| mn =="november")
    m =11;
    else if (mn == "December"|| mn =="december")
    m =12;
    return m;
}

Date:: Date( unsigned m, unsigned d, unsigned y )
{
    year =y;
    if ( m>= 1 && m<=12)
    {
        month = m;
        if ( d <= daysPerMonth(m,y))
        day = d;
        else
        {
            cout <<"Invalid date values: date corrected to "
            << month <<'/'<< daysPerMonth(month,year)<<'/'<< year;
            
        }
    }
    else if (m<1)
    {
        month =1;
        if (d <= daysPerMonth(month, year) )
        day =d;
        else
        {
            cout <<"Invalid date values: date corrected to "
            << month <<'/'<< daysPerMonth(month,year)<<'/'<< year;
        }
    }
    else if (m>12)
    {
        month =12;
        if (d <= daysPerMonth(month,year))
        day = d;
        else
        {
            cout <<"Invalid date values: date corrected to "
            << month <<'/'<< daysPerMonth(month,year)<<'/'<< year;
        }
    }
    else if ( m == 2 )
    {
        month =12;
        if (d <= daysPerMonth(month,year))
        day = d;
        else
        {
            cout <<"Invalid date values: date corrected to "
            << month <<'/'<< daysPerMonth(month,year)<<'/'<< year <<endl;
            day = daysPerMonth(month,year);
        }
        
    }
}
Date:: Date( const string &mn, unsigned d, unsigned y )
{
    year = y;
    month= number(mn);
    monthName = name(month);
    day = daysPerMonth(month, year);
    if (month== 0)
    {
        cout <<"Invalid monthname: the Date was set to 1/1/2000 " << endl;
        month= 1;
        day =1;
        year = 2000;
    }
    else if (month!= 0)
    {
        if (d > day)
        {
            cout <<"Invalid date values: Date corrected to " << month<< '/'
            << day << '/' << year << endl;
            
        }
        else
        {
            day = d;
        }
        
    }
    
}
void Date:: printNumeric() const
{
    cout <<month<<'/'<<day<<'/'<<year;
}

void Date :: printAlpha() const
{
    
    cout << name(month) <<' ' << day <<", " << year;
}
