#include <iostream>
#include <cstdlib>
#include "IntVector.h"
#include <vector>
using namespace std;
int main()
{
    IntVector v;
    v.display();
    vector <int> v2(10);
    v2.resize(13);
    cout <<"cap of v2 is " << v2.capacity();
    cout <<"vector is empty "<< v.empty();
    IntVector v1(10, 25);
    cout <<"vector is empty "<< v1.empty() << endl;
    v1.size();
    cout <<"content of vector v1 " << v1.at(4)<< endl;
    //v1.assign(15, 25);
    cout <<"cap of original v1 " <<v1.capacity()<< endl;
    v1.resize(13, 15); cout <<"cap of v1 after resize "<< v1.capacity();
    v1.resize(13);cout <<"cap of v1 after resize "<< v1.capacity();
    
    
    
    return 0;
}