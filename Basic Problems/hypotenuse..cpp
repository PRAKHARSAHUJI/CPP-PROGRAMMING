#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;

    c = sqrt(pow(a,2)+pow(b,2));
    cout << "The value of hypotenuse is  : "<<c<<endl;
return 0;
}