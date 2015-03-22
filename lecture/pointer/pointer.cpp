
#include <iostream>
#include <cstdlib> // NULL is included in this library.

using namespace std;



int main() {
    int *arr = new int[10];
    for ( int i =0; i < 10; ++i)
    arr[i] =i;
    cout << arr[3];
    return 0;
}