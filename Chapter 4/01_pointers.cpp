// What is Pointer ?   Pointer is a data type which store the address of another data types 

#include <iostream>
using namespace std ;
int main()
{
//                                     Reference 
int a = 1;
int & b = a ;

cout<< "The value of a is " << a <<endl;
cout<< "The value of b is " << b <<endl;


//                                      Pointer 

int x = 1;
int *y = &x;

// You can also do like this 
//  int *y ;
//  y = &x ;


cout<< "The Address of x is " << &x <<endl;
cout<< "The Address of y is " << y <<endl;

// as both &x is equal to y because y store the same address of x and  &x also stores the address of x 


//                                      DEREFERENCE

cout<< "The value of x is " << x <<endl;
cout<< "The value of y is " << *y <<endl;



//                                      Pointer to Pointer
//  It saves the address of pointer in another pointer.

// int x = 1;
// int *y = &x;

int **z =&y;

cout<< "The Address of y is " << &y <<endl;
cout<< "The Address of z is " << z <<endl;



cout<< "The value of y is " << *y <<endl;
cout<< "The value of y is " << **z <<endl;

}