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
const int M= 2; // number of rows
const int N = 3; // number of column
void matrixAdd( const int a[][N], const int b[][N], int sum[][N] )
{
    for ( int i =0; i < M; ++i)// loop for rows
    {
        for ( int j =0; j < N ; ++j) // loop for columns
        {
            sum[i][j] = a[i][j]+ b[i][j];
        }
    }
    
}
void display( int sum[][N])
{
      for ( int i =0; i < M; ++i)// loop for rows
    {
        for (int  j =0; j < N ; ++j) // loop for columns
        {
        
            cout << sum[i][j]<< ' ';
            
        }
        cout << endl;
    }
    
}

void input_matrix(int input[][N])
{
    
    for ( int i =0; i < M; ++i)// loop for rows
    {
        for ( int j =0; j < N ; ++j) // loop for columns
        {
            cin >> input[i][j];
        }
    }
    
}

int main()
{
    int matrixA[M][N] = {0};
    int matrixB[M][N] ={0};
    int matrixSum[M][N]= {0};
    
    cout << "Enter matrix A: "; input_matrix(matrixA); display(matrixA); cout << endl;
    cout << "Enter matrix B: "; input_matrix(matrixB); display(matrixB); cout << endl;
    cout <<"Res:"<< endl;
    matrixAdd(matrixA, matrixB, matrixSum);
    display( matrixSum);
    
   
    return 0;

}