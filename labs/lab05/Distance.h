//  =============== BEGIN ASSESSMENT HEADER ================
/// @file main.cpp
/// @brief  main
///
/// @author HAU TAO [taoquanghau@gmail.com]
/// @date Feb 5, 2014
//  ================== END ASSESSMENT HEADER ===============


#ifndef DISTANCE_H
#define DISTANCE_H

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

};

#endif