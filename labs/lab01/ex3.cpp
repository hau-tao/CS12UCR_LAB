//  =============== BEGIN ASSESSMENT HEADER ================
/// @file ex1.cpp
/// @brief ex1
///
/// @author HAU TAO [taoquanghau@gmail.com]
/// @date Jan 8, 2014
//  ================== END ASSESSMENT HEADER ===============
// This program implements the Monte Carlo Method for estimating the value of PI. 

   

#include <iostream> 

#include <cstdlib>
#include <vector>
using namespace std; 
int search(vector<int> &v, int removed_number)
{
    int index = -1;
    for ( int i = 0; i < v.size(); ++i)
    {
        if (removed_number == v.at(i))
        {
            index = i;
            break;
        }
    }
    return index;
    
}
void remove(vector<int> &v, int removed_number)
{
    if (search(v, removed_number)!= -1)
    {
        for ( int i = search(v, removed_number); i < v.size()-1; ++i)
        {
            v.at(i) = v.at(i+1);
        }
        v.pop_back();
    }
}

int main()
{
    int input_integer = 0;
    int removed_number = 0;
    vector<int> v ; 
    cout << "Please enter in integers (0 to stop): ";
    
    while (cin >> input_integer && input_integer !=0)
    {
        v.push_back (input_integer);
    }
    cout <<"what number you would like to remove ";
    cin >> removed_number;
    cout <<"Found: " << search (v, removed_number) << endl;
    remove (v, removed_number);
    cout <<"Result: ";
    for ( int i =0; i < v.size(); ++i)
    {
        cout << v.at(i) << " ";
    }
   
    
   
    
    return 0;
}