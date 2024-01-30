#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    cout << " Enter Your Name : ";
    cin >> name;
    cout << " Enter Your Age : ";
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;
    case 20:
        cout << "You are 20" << endl;
        break;
    default:
        cout << "Your age is not known" << endl;
        break;
    }

    return 0;
}

/*  if break is not used it will print all the case below the given case */





