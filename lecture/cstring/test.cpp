#include <iostream>

using namespace std;


int main()
{
  int n=0; // a variable
  int *ptr1= &n; // a pointer to that variable
  int *ptr2; // another pointer

  ptr2=ptr1; // make the second pointer have the value (the adress) to wich the first pointer points to

  cout<<"The adress of 'n' is :"<<*ptr1<<endl;
  cout<<"Again, the adress of 'n' is :"<<*ptr2; // this should be the same as the cout above


  return 0;

}