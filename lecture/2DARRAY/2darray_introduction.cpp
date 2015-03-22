// Corresponding Zyante chapters: 2D arrays
// Introduction to 2D arrays (matrix)
//  Provides an introduction to 2D arrays, and how to iterate over an array/update the "matrix".
#include <iostream>

using namespace std;

const int ROWS = 10;
const int COLUMNS = 10;

// This function is capable of displaying matrices with "COLUMNS" number of columns, and any number of rows. The number
// of rows and columns that are actually displayed is indicated with the "rows" and "columns" parameters.
void display_matrix(const int matrix[][COLUMNS],int rows,int columns) {
    for (int r = 0;r < rows;r++) {
        for (int c = 0;c < columns;c++) {
            // If the value of the cell is a single digit, output an additional space in front of it. This allows the
            // output to look more like a matrix.
            // 1 2 3 4          1  2  3  4
            // 5 6 7 8     =>   5  6  7  8 
            // 9 10 11 12       9 10 11 12
            if (0 <= matrix[r][c] && matrix[r][c] < 10) {
                cout << ' ';
            }
            cout << matrix[r][c] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

void update_matrix(int matrix[][COLUMNS],int rows,int columns,int amount) {
    for (int r = 0;r < rows;r++) {
        for (int c = 0;c < columns;c++) {
            matrix[r][c] += amount;
        }
    }
}

// This function will sum the diagonal of a square matrix with "rows" and "rows" columns. It will check to make sure
// that it does not go out of bounds by ensuring that i does not exceed "COLUMNS"
int sum_diagonal(const int matrix[][COLUMNS],int rows) {
    int result = 0;
    for (int i = 0;i < rows && i < COLUMNS;i++) {
        result+=matrix[i][i];
    }
    return result;
}

int main() {
    // A 3x3 grid initialized within a "ROWS"x"COLUMNS" matrix. All other cells are initialized to 0
   int grid3x3[ROWS][COLUMNS] = {
       {1,2,3},
       {4,5,6},
       {7,8,9}};
   // This initialization fails, instead the first 9 values in row 0 are initialized and all others are set to 0. If
   // COLUMNS is less than 9, then the initialization will wrap down to the next row.
   int grid3x3Failed[ROWS][COLUMNS] = {1,2,3,4,5,6,7,8,9};
   // A 4x4 grid initialized within a "ROWS"x"COLUMNS" matrix. All other cells are initialized to 0
   int grid4x4[ROWS][COLUMNS] = {
       { 1, 2, 3, 4},
       { 5, 6, 7, 8},
       { 9,10,11,12},
       {13,14,15,16}};

   // You can change what bounds to display to see what happens with the values in the matrix.
   cout << "3x3 grid: " << endl;
   display_matrix(grid3x3,3,3);
   int a[ROWS][COLUMNS]={{1},{2,3},{4,5,6}};
   cout <<"matrix a " <<endl;
   display_matrix(a,3,4);
   int b[ROWS][COLUMNS]={{1,2,3,4,5,6}};
   cout <<"matrix b " <<endl;
   display_matrix(b,3,4);
   cout << "3x3 grid (incorrect initialization): " << endl;
   display_matrix(grid3x3Failed,3,3);
   cout << "4x4 grid: " << endl;
   display_matrix(grid4x4,4,4);

   // Subtract 1 for each element in the 3x3 grid, all other values remain unchanged.
   update_matrix(grid3x3,3,3,-1);
   display_matrix(grid3x3,ROWS,COLUMNS);

   // Subtract 1 for each element in the 4x4 grid, all other values should remain unchanged.
   // Accidentally set update to 5 rows/columns though, leading to an error. Observe the output.
   update_matrix(grid4x4,5,5,-1);
   display_matrix(grid4x4,ROWS,COLUMNS);

   cout << "Diagonal sum of 3x3: " << sum_diagonal(grid3x3,3) << endl;
   cout << "Diagonal sum of 4x4: " << sum_diagonal(grid4x4,4) << endl;
   // Calculated the incorrect sum. The sum across 5 rows/columns instead of 4 is summed. Observe the output.
   cout << "Incorrect Diagonal sum of 4x4: " << sum_diagonal(grid4x4,5) << endl;
   
   return 0;
}
