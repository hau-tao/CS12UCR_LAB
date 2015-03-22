#include <iostream>
using namespace std;
#include "IntList.h"
#include "SortedSet.h"
int main()
{
    IntList v1;
    /*for ( unsigned i =0 ; i< 10; ++i)
    {
    v1. push_front(i);}
    cout << endl;
    v1. pop_front();*///125 127 165 174 192 196 209 231 246 262 288 
    v1.push_back(165);
    v1. push_back(125);
    v1.push_back(192);
    v1. push_back(174);
    v1. push_back(209);
    v1. push_back(231);
    v1. push_back(246);
    v1. push_back(262);
    v1. push_back(288);
    
    cout <<"unsorted list "<< endl;
    v1. display();cout << endl;
    cout << "select_sort list " << endl;
    v1.select_sort();
    cout << endl;
    v1.display();
    cout << " insert sorted list " << endl;
    v1. insert_sorted(120);
    v1.insert_sorted(300);
    v1.insert_sorted(120);
    cout <<"pop front " << endl;
    for ( int i =0; i <12;++i)
    v1.pop_front();
    cout <<"after pop front " << endl;
    v1. push_back(1);
    v1.push_back (1);
    v1.push_back (1);
    v1.push_back(21);
    v1.push_back (21);
    v1.push_back(12);
    v1.push_back(34);
    v1.push_back (1);
    v1.display();
    cout << endl<<"after remove duplicate " << endl;
    v1.remove_duplicates();
    v1.display();
    
    cout <<endl<<"copy constructor"<< endl;
    IntList v2 = v1;
  
    v2.display();
    cout <<endl;
    
    IntList v3;
    v3.push_back(100);
    cout << endl;
    v3.display();
    v3 = v1;
    cout << endl<<"overloaded" << endl;
    v3.clear();
    v3.display();
    
    cout <<"------------------------------"<< endl;
    cout <<"    *sorted list output*      "<<endl;
    cout <<"------------------------------"<< endl;
    
    SortedSet ss1(v1);
    SortedSet ss2 (v3);
    SortedSet ss3;
    SortedSet ss4;
    SortedSet ss5;
    ss5.add(12);
    cout <<"output of sortedSet" << endl;
    cout <<"ss1 output is " << endl;
    ss1.display();
    cout <<endl<<"add an value the the set " << endl;
    ss2.add(11);
    ss2.add(12);
    ss2.add(50);
    ss2.push_back(15);
    ss2.push_front(45);
    cout << endl<<"ss2 output is " << endl;
    ss2.display();
    ss3 = ss1|ss2;
    cout << endl<<"ss3 is" <<endl;
    ss3.display();
    cout << endl<<"ss1 output after union 2 linked lists is "<< endl;
    ss1.display();
    ss4 = ss5&ss2;
    cout << endl<<"ss4 output is "<< endl;
    ss4.display();
    cout <<endl<<"false "<<ss5.in(30)<< endl;
    cout <<endl<<"true  "<<ss5.in(12)<< endl;
    
    
    
    
    return 0;
}