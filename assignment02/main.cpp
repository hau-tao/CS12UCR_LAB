//  =============== BEGIN ASSESSMENT HEADER ================
/// @file main.cpp
/// @brief assignment02/main.cpp
///
/// @author Test Student [taoquanghau@gmail.com]
/// @date May 1, 2014
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;
const int C = 8;
const int R = 6;
void read_input(double grid[][C]);
//void display( double grid[][C]);
//double update_grid( double grid[][C]);
void write_output(string output_name, double grid[][C] );






/*double update_grid (double grid[][C])
{
    double diff=0.0, max = 0.0, oldValue = 0.0;
    
    for ( unsigned i =1; i< R -1 ; ++i)
    {
        for (unsigned j=1; j < C -1; ++j)
        {
            oldValue = grid[i][j];
            grid[i][j] = 
            (grid[i-1][j] + grid[i+1][j] + grid[i][j+1] + grid[i][j-1]) / 4
            - grid[i][j];
            diff = grid[i][j] - oldValue;
            if (abs(diff)> max)
            {
                max = abs(diff);
            }
        }
    }
    return max;
} */
double updated_grid (double grid[][C] )
{
  double old_grid  = 0.0;
  double Difference = 0.0;
  double max =0.0;
 
  for ( unsigned  i =1; i  < R-1; ++i )
  {
    for ( unsigned j=1; j  < C-1; ++j)
    {
      old_grid = grid[i][j];
      grid[i][j] = (grid[i][j-1] + grid[i][j+1] + grid [i+1][j]
      + grid[i-1][j]) / 4;
      Difference = grid[i][j] - old_grid;
      if (fabs (Difference) > max)
      {
        max = fabs (Difference);
      }
  

    }
    
  }
  return max;
 

}

void read_input(string input_name, double grid[][C])
{
   ifstream inFS;     // Input file stream
   // Try to open file
   cout << "Enter your input file" << endl;
   cin >> input_name;
   
   inFS.open (input_name.c_str());
   if (!inFS.is_open()) {
      cout << "Could not open file data.txt." << endl;
      return ; 
   }
   double top, right, bottom, left;
   double tolerance;
   double MAX =1.0;
   inFS >> top; inFS >>right; inFS >> bottom; inFS >>left;
   
   // assign value of top & bottom
   for ( unsigned j =0; j < C; ++j)
   {
       grid[0][j] = top;
       grid[5][j] = bottom;
   }
   
   // assign value of right & left
   for ( unsigned i =0; i<R; ++i)
   {
       grid[i][7] = right;
       grid[i][0] = left;
   }
   
   // read the tolerrance
   inFS >>tolerance;
   inFS.close();
   cout << "tolerance is " << tolerance << endl;
   while (MAX > tolerance)
   {
       MAX = updated_grid(grid);
      
   }
   

}

void write_output(string output_name, double grid[][C] )
{
    ofstream outFS;
    cout << "Enter output file" <<" ";
    cin >> output_name;
    outFS.open(output_name.c_str());
    if (!outFS.is_open()) {
        cout << "Error opening " << output_name << endl;
        exit(1);
    }
    for ( unsigned i =1; i< R-1 ; ++i)
    {
        for (unsigned j=1; j <C-1; ++j)
        {
            outFS <<setw(20)  << grid[i][j]  ;
        }
        outFS << endl ;
       
    }
    outFS.close();
}




int main() 
{
   double grid[R][C] ={0}; // decalre the grid with 0
   string input, output; 
   read_input(input, grid);
   write_output(output, grid);
 
  
    return 0;
}