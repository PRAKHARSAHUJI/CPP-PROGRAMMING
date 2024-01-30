#include <iostream>
using namespace std ;

int sum(int a , int b)
{
    int c = a + b ;
    return c ;                    // return function key
}
int main ()
{
int num1 , num2;
cout<<"Enter Num1 : ";
cin>>num1;
cout<<"Enter Num1 : ";
cin>>num2;
cout<<"The sum is : "<<sum(num1,num2)<<endl;
return 0;

}