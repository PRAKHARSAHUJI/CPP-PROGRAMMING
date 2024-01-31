#include<iostream>
using namespace std;
int main()
{ 
    int a,b,c;
    cout<<"Enter the Sides : ";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a+b>c && b+c>a && c+a>b)
    {
    cout<<" Valid Triangle.Given are the Sides of the Triangle"<<endl;
    }
    else
    {
    cout<<" Not a Triangle.These are not the sides of a Triangle ."<<endl;
    }

    return 0;
}