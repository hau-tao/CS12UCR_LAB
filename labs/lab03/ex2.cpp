//  =============== BEGIN ASSESSMENT HEADER ================
/// @file ex1.cpp
/// @brief ex1
///
/// @author HAU TAO [taoquanghau@gmail.com]
/// @date Jan 22, 2014
//  ================== END ASSESSMENT HEADER ===============
// add and multiply 2 matrixes 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int Q= 2; // number of rows
const int R = 3; // number of column
const int S = 3;
void matrixMult(const int a[][R], const int b[][S], int product[][S])
{
    for ( int i =0; i < Q ; ++i)// loop for rows
    {
        for ( int j =0; j < R ; ++j) // loop for columns
        {
            for ( int k =0; k < S ; ++k)
            {
                product[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }
    
}
void display( int product[][S])
{
      for ( int i =0; i < Q; ++i)// loop for rows
    {
        for (int  j =0; j < S ; ++j) // loop for columns
        {
        
            cout << product[i][j]<< ' ';
            
        }
        cout << endl;
    }
    
}

void matrix_A(int input[][R])
{
    
    for ( int i =0; i < Q; ++i)// loop for rows
    {
        for ( int j =0; j < R ; ++j) // loop for columns
        {
            cin >> input[i][j];
        }
    }
    
}
void matrix_B(int input[][S])
{
    
    for ( int i =0; i < R; ++i)// loop for rows
    {
        for ( int j =0; j < S; ++j) // loop for columns
        {
            cin >> input[i][j];
        }
    }
    
}

int main()
{
    int matrixA[Q][R] = {0};
    int matrixB[R][S] = {0};
    int product[Q][S]= {0};
    
    cout << "Enter matrix A: "; matrix_A(matrixA); 
    cout << "Enter matrix B: "; matrix_B(matrixB); 
    cout <<"Res:"<< endl;
    matrixMult(matrixA, matrixB, product);
    display( product);
    
   
    return 0;

}