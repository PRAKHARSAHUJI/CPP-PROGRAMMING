


//  There are two types of header files 
//  1. System header files : It comes with Compiler   ------------------>  #include <iostream>
//  2. User defined Header Files : It is written by the programmer.Means that it should be in Current Directory-> #include "this.h"
// This will Produce error if it is not present in the current directory with the same name .



// Arithmetic 
// Logical
// Comparison
// Increment
// Assignment

#include <iostream>
using namespace std;
int main()
{

int a,b;
a=4;
b=4;
cout << "OPERATORS IN C++" << endl; 

// Arithmetic Operators

cout << " The value of a+b is : " << a+b <<"\n";
cout << " The value of a-b is : " << a-b <<"\n";
cout << " The value of a*b is : " << a*b <<"\n";
cout << " The value of a/b is : " << a/b <<"\n";
cout << " The value of a%b is : " << a%b <<"\n";

// Increment Operators


cout << " The value of a++ is : "<< a++ <<"\n";
cout << " The value of ++a is : "<< ++a <<"\n";
cout << " The value of a-- is : "<< a-- <<"\n";
cout << " The value of --a is : "<< --a <<"\n";

// Logical Operators

cout << " The value of a & b is : "<< (a&&b)<<"\n";
cout << " The value of a||b is : "<< (a || b) <<"\n";
cout << " The value of ((a>=b) && (a<b)) is : "<< ((a>=b) && (a<b)) <<"\n";
cout << " The value of (a>=b) || (a<b)) is : "<< ((a>=b) || (a<b)) <<"\n";
cout << " The value of (!(a>=b) || (a<b))) is : "<< (!(a>=b) || (a<b)) <<"\n";


// Comparison Operators
cout << " The value of a==b is : "<<( a==b )<<"\n";
cout << " The value of a>=b is : "<<( a>=b )<<"\n";
cout << " The value of a<=b is : "<<( a<=b )<<"\n";
cout << " The value of a!=b is : "<<( a!=b )<<"\n";
cout << " The value of a>b is : "<<( a>b )<<"\n";
cout << " The value of a<b is : "<<( a<b )<<"\n";




return 0;

}