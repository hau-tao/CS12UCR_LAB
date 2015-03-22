#include <iostream>
#include <cstdlib>
#include "IntVector.h"
using namespace std;
void IntVector:: display() const
{
    cout <<"size " << sz <<endl;
    cout <<"cap "<< cap<< endl;
    for ( unsigned i =0; i <sz; ++i)
    cout <<"content of array " << data[i] << endl;
}
IntVector:: IntVector()
{
    sz =0; cap =0; data=0;
}
IntVector::IntVector (unsigned size)
{
    sz =size;
    cap = size;
    data = new int[size];
    for (unsigned i =0; i<size; ++i)
    data[i] =0;
}
IntVector::IntVector( unsigned size, int value )
{
    sz= size;
    cap =size;
    data = new int[size];
    for (unsigned i =0; i<size; ++i)
    data[i] =value;
    
}
IntVector::~IntVector()
{
    delete [] data;
}
unsigned IntVector :: size() const
{
    return sz;
}

unsigned IntVector:: capacity() const
{
    return cap;
}
bool IntVector:: empty( ) const
{
    if (sz == 0)
    return true;
    else
    return false;
}
const int &IntVector :: at( unsigned index ) const
{
    
    if ( 0 <= index && index < sz)
    return data[index];
    else 
    exit(1);
}
int &IntVector:: at( unsigned index )
{
    if ( 0 <= index && index < sz)
    return data[index];
    else 
    exit(1);
    
}
void IntVector::expand()
{
    if (sz==0)
    {
        cap =1;
        int *temp1= new int [1];
        for (unsigned i =0; i<sz;++i)
        {
            temp1[i]= data[i];
        }
        delete[] data;
        data = temp1;
        
    }
    else if (sz>0)
    {
        int *temp = new int [cap*2];
        for (unsigned i =0; i< sz; ++i)
        {
            temp[i] = data[i];
        }
        delete[] data;
        data = temp;
        cap *= 2;
        
    }
    
    
    
}
void IntVector:: expand( unsigned amount )
{
    int *temp = new int [cap + amount];
    for (unsigned i =0; i<sz; ++i)
    temp[i] = data[i];
    delete [] data;
    data = temp;
    cap += amount;
    
}
void IntVector::insert( unsigned index, int value )
{
    ++sz;
    for (unsigned i = index;i < sz;++i)
    {
        if (sz > cap)
        expand();
        data[i+1] = data[i];
        data[index] = value;
    
    }
}
void IntVector:: erase( unsigned index )
{
    if (index >= sz)
    exit(1);
    for (unsigned i = index; i < sz; ++i)
    {
        data[i] = data[i+1];
    }
    --sz;
    
}
const int &IntVector:: front( ) const 
{
    return data[0];
}
int & IntVector:: front( )
{
    return data[0];
    
}

const int &IntVector:: back( ) const
{
    return data[sz-1];
}
int & IntVector:: back( )
{
    return data[sz-1];
}
void IntVector:: assign( unsigned n, int value )
{
    sz = n;
    if ( sz > cap)
    {
        expand(n-cap);
        int temp1 = cap;// stored capacity after double
        cap = cap/2; //back to original capacity
        expand(n-cap);
        int temp2 = cap; // stored capacity after adding an amount
        if ( temp1 >= temp2)
        cap = temp1;
        else
        cap = temp2;
    }
    for (unsigned i =0; i <sz;++i)
    data[i]= value;
}
void IntVector:: push_back( int value )
{

    if ( sz >= cap)
    {
        expand();
        ++sz;
        data[sz-1] = value;
    }
    else 
    {
        ++sz;
        data[sz-1]= value;
    }
    
}
void IntVector:: pop_back( )
{
    
    if (empty())
    exit(1);
    --sz;
}

void IntVector::clear( )
{
    sz=0;
}
void IntVector:: resize( unsigned size )
{
   
    if ( size < sz){
    sz = size;}
    if (size > cap)
    {
        if(size> cap*2)
        expand(size-cap);
        else
        expand();
    }
    if (size > sz)
    {
        for ( unsigned i =sz; i < size; ++i)
        data[i] =0;
        sz = size;
        
    }
    
}

void IntVector:: resize( unsigned size, int value)
{
    if ( size < sz)
    sz = size;
    if (size > cap)
    {
        if(size> cap*2)
        expand(size-cap);
        else
        expand();
    }
    if (size > sz)
    {
        for ( unsigned i =sz; i < size; ++i)
        data[i] =value;
        sz = size;
    }
}

void IntVector:: reserve( unsigned n )
{
    if(n>cap*2)
    expand(n-cap);
    else 
    expand();
    
}

