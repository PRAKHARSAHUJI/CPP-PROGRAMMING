#include <iostream>
using namespace std;
int main()
{


float a =4.987;
long double b =4.987;

cout << "The Size of 4.987 is  " << sizeof(4.987) << endl;
cout << "The Size of 4.987f is  " << sizeof(4.987f) << endl;
cout << "The Size of 4.987F is  " << sizeof(4.987F) << endl;
cout << "The Size of 4.987l is  " << sizeof(4.987l) << endl;
cout << "The Size of 4.987L is  " << sizeof(4.987L) << endl;
return 0;
}

// normal if we use decimal number it takes double, if We mention f,F it will take float ,if We mention l,L it will take long double 