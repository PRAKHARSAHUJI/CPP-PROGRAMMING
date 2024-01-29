#include <iostream>
#include <iomanip> // for setprecision

using namespace std;
int main()
{


int a =40;
float b =40.45;

cout << "The value of a is " << fixed << setprecision(3)  << (b) << endl;
cout << "The value of a is " << (float)a << endl;

return 0;
}


// -------------->           << endl is used for changing the line to new line 




// #include <iostream>
// #include <iomanip> // for setprecision

// using namespace std;

// int main()
// {
//     int a = 40;
//     float b = 40.45;

//     cout << "The value of a is " << fixed << setprecision(3) << b << endl;
//     cout << "The value of a is " << static_cast<float>(a) << endl;

//     return 0;
// }

