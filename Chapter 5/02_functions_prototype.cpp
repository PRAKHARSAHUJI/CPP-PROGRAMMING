/*


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

*/// This Program is acceptable as function that is going to be used is defined above . 

/*
#include <iostream>
using namespace std ;


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
int sum(int a , int b)
{
    int c = a + b ;
    return c ;                    // return function key
}

*/// This Program is not  acceptable as function that is going to be used is defined below where it is called . 





// So we will us Function Prototype by which we can use function that is to be called anywhere .

#include <iostream>
using namespace std ;

int sum(int,int);              // ------------------>    Function Prototype                                        Acceptable     
//                                ------------------>    This can also be used   ----->  int sum(int a, int b);    Acceptable            
//                                ------------------>    This can't also be used ----->  int sum(int a, b);        Acceptable          
int main ()
{
int num1 , num2;
cout<<"Enter Num1 : ";
cin>>num1;
cout<<"Enter Num1 : ";
cin>>num2;                        // num1 and num2 are actual parameters 
cout<<"The sum is : "<<sum(num1,num2)<<endl;
return 0;

} 
int sum(int a , int b)
{                                 // Formal Parameter a and b will be taking value from actual parameters num1 and num2  
    int c = a + b ;
    return c ;                    // return function key
}
// By using prototype we can use the function anywhere