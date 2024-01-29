#include <iostream>
using namespace std;
int main()
{


int a =40;
float b =40.45;

cout << "The value of a is " << float(a) << endl;
cout << "The value of a is " << (float)a << endl;

 
cout << "The value of b is " <<int(b) <<endl;
cout << "The value of b is " <<(int)b <<endl;

cout << "The Value of a+b is : " << a+b  <<endl;
cout << "The Value of a+int(b) is : " << a+int(b)  <<endl;
cout << "The Value of a+(int)b is : " << a+(int)b  <<endl;



return 0;

}
