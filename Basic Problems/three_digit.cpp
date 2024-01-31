#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"Enter The Number : ";
    cin>>n;
    if(n>99 && n<1000)
    {
    cout<<"Three Digit Number"<<endl;
    }
    else
    {
    cout<<"Not a Three Digit Number"<<endl;
    }

    return 0;
}