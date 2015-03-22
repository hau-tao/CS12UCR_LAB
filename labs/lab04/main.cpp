//  =============== BEGIN ASSESSMENT HEADER ================
/// @file ex1.cpp
/// @brief ex1
///
/// @author HAU TAO [taoquanghau@gmail.com]
/// @date Jan 22, 2014
//  ================== END ASSESSMENT HEADER ===============
// add and multiply 2 matrixes 
#include <iostream>
using std:: cout;
using std:: endl;
class Rational
{

   private:

      int numer;

      int denom; 

   public:

      Rational();

      Rational(int); 

      Rational(int, int); 

      const Rational add(const Rational &) const; 

      const Rational subtract(const Rational &) const; 

      const Rational multiply(const Rational &) const; 

      const Rational divide(const Rational &) const; 

      void display() const; 

};

/* constructor (0/1) */
Rational:: Rational()
{
    numer =0;
    denom =1;
    
}
/* constructor  (number /1 ) */
Rational :: Rational (int x)
{
    numer = x;
    denom = 1;
    
}
/* constructor ( x/y) */
Rational :: Rational ( int x, int y)
{
    numer = x;
    denom = y;
}

void Rational :: display () const
{
    cout << numer <<"/"<< denom ;
}
const Rational Rational::add(const Rational &x) const
{
    Rational add;
    add.numer = numer * x.denom + denom * x.numer ;
    add.denom = denom * x.denom;
    return add;
    
   
}

const Rational Rational:: subtract(const Rational &x) const
{
    Rational subtract;
    subtract.numer =   numer * x.denom - denom * x.numer ;
    subtract.denom = denom * x.denom;
    return subtract;
    
}
const Rational Rational:: multiply(const Rational &x) const
{
    Rational multiply;
    multiply. numer =  numer * x.numer ;
    multiply. denom = denom * x. denom;
    return multiply;
}
const Rational  Rational::divide(const Rational &x) const
{
    Rational divide;
    divide. numer =  numer * x.denom ;
    divide. denom = denom * x. numer;
    return divide;
    
}



int main ()
{
    
    Rational x; // first constructor
    Rational y = Rational (10);// second constructor
    Rational z = Rational (6, 2);// 3rd constructor
    Rational add, subtract, multiply, division;
    cout <<" the first constructor is ";
    x. display();
    cout << endl;
    cout <<" the second constructor is ";
    y. display();
    cout << endl;
    cout <<" the third construcotr is ";
    z. display();
    cout << endl;
    cout <<" Add the fraction: ";
    add= y.add (z);
    add.display();
    cout << endl;
    subtract = y. subtract(z);
    cout << "subtraction ";
    subtract.display();
}