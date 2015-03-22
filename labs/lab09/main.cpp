//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab9.cpp
/// @brief Lab 9 for CS 13
///
/// @author hau tao[taoquanghau@gmail.com]
/// @date February 25, 2015
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <string>
using namespace std;
void reverse(string &s, string indent)
{
    string temp;
    if ( s.length () ==0)
    return;
    else if ( s.length() ==1) //base case:  length =1;
    return ;
    else
    {
        //cout <<indent<< "before calling reverse " << endl;
        temp =s.substr(1, s.length()-1)  ;
        //cout <<indent<< "string is " << s<< endl;
        //cout <<indent<< "temp is " << temp << endl;
        //cout <<indent<< "s at index 0 is " << s.at(0)<<endl;
     
        reverse(temp, indent+"\t");
       // cout << endl << endl <<"after calling recursive function " << endl;
        //cout <<"s at index0 " << s.at(0)<< endl;
        s = temp + s.at(0);
        
       
       // cout << "temp is recursively " << temp<<endl;
        
       // cout << "s is on each recursive step  " << s<< endl;
        
     
        
    }
    
 
}
int main ()
{
    string s ;
    string indent ="";
    cout <<"input a string " << endl;
    cin >> s;
    cout << endl;
    reverse(s, indent);
    cout <<"reverse string is " << s << endl;
    
    
    return 0;
}
 