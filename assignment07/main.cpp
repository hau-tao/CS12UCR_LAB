//  =============== BEGIN ASSESSMENT HEADER ================
/// @file main.cpp
/// @brief assignment7 for CS 13
///
/// @author hau tao[taoquanghau@gmail.com]
/// @date February 25, 2015
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
bool diophantine(int a, int b, int c, int &x, int &y);
int gcd(int a, int b)
{
    if ( b==0)
    return a;
    else
    return gcd (b, a % b);
}
void read_write(string input, string output, int &a, int &b, int &c, int&x, int&y)
{
    ifstream fin;
    ofstream fout (output.c_str());

    fin.open(input.c_str());
    // input read in
    if (!fin.is_open())
    {
        cout <<"Could not open infile " << endl;
        return ;
        
    }
    //output write_out
    if (!fout.is_open())
    {
        cout <<"Could not open output file" << endl;
        return;
    }
    
    while (fin.good())
    {
        fin >> a;
        fin >>b;
        fin >>c;
        if (!diophantine(a,b,c,x,y))
        {
            fout << "No solution!" << endl;
        }
        else
        {
            fout << x<<" " <<y << endl;
        }
        
    }
    fin.close();
    fout.close();
    
}
bool diophantine(int a, int b, int c, int &x, int &y)
{
    int u, v;
    if (c % gcd(a,b) !=0)
    {
        return 0;
    }
    else 
    {
        if ( a % b ==0)
        {
            x = 0;
            y = c/b;
        }
        else 
        {
            int r = a % b ; // bu + rv = c, if yes x =v; y = u-qx
            diophantine(b,r,c,u,v);
            x = v;
            y = u - (a/b)*x;
    
        }
    }
    return 1;
}

int main (int argc, char* argv[])
{
    int a,b,c,x,y;
    string input, output;
   
    if (argc > 3) {
        cout << "Error: Proper usage: " << argv[0] 
        << " <input_filename> <output_filename>" << endl;
        return 1;
    } else if (argc == 3) {
        input = argv[1];
        output = argv[2];
    } else { 
        cout << "Enter name of input file: ";
        cin >> input;
        cout << "Enter name of output file: ";
        cin >> output;
    }
    
   
    read_write(input,output, a, b,c, x,y);
    
    
    
    
    return 0;
    
}