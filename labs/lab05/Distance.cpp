//  =============== BEGIN ASSESSMENT HEADER ================
/// @file main.cpp
/// @brief  main
///
/// @author HAU TAO [taoquanghau@gmail.com]
/// @date Feb 5, 2014
//  ================== END ASSESSMENT HEADER ===============

#include <iostream>
#include "Distance.h"
#include <cmath>
using  namespace std;


/*
class Distance

{

  private:

    unsigned feet;

    double inches;

  public:

    Distance();

    Distance(unsigned, double);

    Distance(double);

    double convertToInches() const;

    const Distance operator+(const Distance &) const;

    const Distance operator-(const Distance &) const;

    void display() const;

  private:

    void init();

};*/

Distance :: Distance()
{
    inches =0;
    feet = 0;
}
Distance :: Distance (unsigned ft, double inch)
{
  feet =ft;
  inches = inch;
  inches = convertToInches();
  init();
  
  
}

void Distance:: display() const
{
  cout << feet << "' " << inches <<"\"" ;
}
Distance::Distance(double inch)
{
  inches = inch;
  init();
}

double Distance:: convertToInches() const
{
  return feet * 12.0 + inches;
  
}

const Distance  Distance:: operator+(const Distance & d) const
{
  Distance d1;
  d1.inches = convertToInches() + d.convertToInches();
  d1.init();
  return d1;
}

const Distance  Distance:: operator-(const Distance & d) const
{
  Distance d2;
  d2.inches = fabs (convertToInches()- d.convertToInches());
  d2.init();
  return d2;
}




void Distance:: init()
{
  if (inches >=0)
  {
    feet = (inches) / 12;
    inches = fmod(inches, 12);
  }
  
  else
  {
    inches = fabs(inches);
    feet =  (inches) / 12;
    inches = fmod(inches, 12);
  }
  
  
  
    
}