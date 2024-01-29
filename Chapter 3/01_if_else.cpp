#include <iostream>
using namespace std ;

int main()
{
string name;
int age;
cout<< " Enter Your Name : ";
cin >> name ;

cout<< " Enter Your Age : ";
cin >> age ;

if(age<=0){
cout<<name<<(" is Not Born ");
}

else if(age < 18)
{
cout<<name<<(" cannot come to the Party ");
}

else if(age ==18)
{
cout<<name<<(" can come to the Party but as a Kid ");
}

else 
{
    cout<<name<<" can come to the party";
}

return 0;
}