#include <iostream>
using namespace std;
int main()
{
double a,b;
char operation;
cout<<"Enter the Number a and b : "<<endl;
cin>>a>>b;

cout<<"Enter the Operation '+','-','*','/','%' : "<<endl;
cin>> operation;
switch(operation)
{
case '+' :
cout<<(a+b)<<endl;
break;

case '-' :
cout<<(a-b)<<endl;
break;

case '*' :
cout<<(a*b)<<endl;
break;

case '/' :
cout<<(a/b)<<endl;
break;

case '%' :
cout<<(int(a)%int(b))<<endl;
break;

default : 
cout<<"None"<<endl;


}

}