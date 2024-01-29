// manipulator -------------> it formats the cpp program like it give function like endl which changes to another line , 
//  setw which formats printing of Number  it sets the width like setw(4)it sets the width to 4 of all 

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{


int a =4;
int b =49;
int c =490;


int d = 1234;
int e =123456;
int f =123;
int g =123456789;
int h =1234567;


cout << " The Value of a without setw is : " << a << endl ;
cout << " The Value of b without setw is : " << b << endl ;
cout << " The Value of c without setw is : " << c << endl ;



cout << " The Value of a setw is : " <<setw(4) << a  << endl ;
cout << " The Value of b setw is : " <<setw(4) << b  << endl ;
cout << " The Value of c setw is : " <<setw(4) << c  << endl ;



cout << " The Value of d without setw is : " << d << endl ;
cout << " The Value of e without setw is : " << e << endl ;
cout << " The Value of f without setw is : " << f << endl ;
cout << " The Value of g without setw is : " << g << endl ;
cout << " The Value of h without setw is : " << h << endl ;



cout << " The Value of d setw is : " <<setw(9) << d  << endl ;
cout << " The Value of e setw is : " <<setw(9) << e  << endl ;
cout << " The Value of f setw is : " <<setw(9) << f  << endl ;
cout << " The Value of g setw is : " <<setw(9) << g  << endl ;
cout << " The Value of h setw is : " <<setw(9) << h  << endl ;


return 0;

}