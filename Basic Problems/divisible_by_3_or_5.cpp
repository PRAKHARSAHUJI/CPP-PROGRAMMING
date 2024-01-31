#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"Enter The Number : ";
    cin>>n;
    if(n%5==0 || n%3==0000)
    // we can also use (n%15 ==0) L C M of both 3 and 5 
    {
    cout<<"Divisible by 3 or 5."<<endl;
    }
    else
    {
    cout<<"Neither Divisible by 3 nor 5."<<endl;
    }

    return 0;
}