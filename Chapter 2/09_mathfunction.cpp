/*

#include <iostream>
using namespace std;
int main()
{
    int a,b,x,y;
    cout << "Enter the Value of a and b " ;             // Max and min can be done Without including <cmath>
    cin >> a >>b;
    x = max(a,b);
    y = min(a,b);

    cout << "Max value is "<< x<<endl;
    cout << "Min value is "<< y<<endl;
}

*/

#include <iostream>
#include<cmath>                             // use to do some operations like pow ,round, sqrt,abs,ceil,floor,
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,x,y,z;
    float u,v;
    cout << "Enter the Value of a and b :  " ;
    cin >> a >>b;
    cout << "Enter the Value of Decimal u and  negative v : " ;
    cin>> u>>v;

    c = sqrt(a);
    d = abs(v);        //      use to do give positive value of the function     
    e = round(u);      //      It rounds up to the nearest Integer which can be above, below or equal to the actual value
    f = ceil(u);       //      ceil rounds up to the nearest Integer which can be equal to or above the actual value.
    g = floor(u);      //      floor rounds up to the nearest Integer which can be equal to or below the actual value.
    x = max(a,b);               
    y = min(a,b);
    z = pow(a,b);
    

    cout << "Max value of a and b is "<< x<<endl;
    cout << "Min value of a and b is "<< y<<endl;
    cout << "Value of a and b is "<< y<<endl;
    cout << "Value of c is  "<< c<<endl;
    cout << "Value of d is  "<< d<<endl;
    cout << "Value of e is  "<< e<<endl;
    cout << "Value of f is  "<< f<<endl;
    cout << "Value of g is  "<< g<<endl;
}

