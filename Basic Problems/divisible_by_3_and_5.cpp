#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"Enter The Number : ";
    cin>>n;
    if(n%5==0 && n%3==0000)
    // we can also use (n%15 ==0) L C M of both 3 and 5 
    {
    cout<<"Divisible by both 3 and 5."<<endl;
    }
    else
    {
    cout<<"Not Divisible by both 3 and 5."<<endl;
    }

    return 0;
}