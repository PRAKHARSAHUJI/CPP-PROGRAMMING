#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"Enter The Number : ";
    cin>>n;
    if((n%5==0 || n%3==0000) && ((n%15)!=0))
    // we can also use (n%15 ==0) instead of (n%5==0 && n%3==0) L C M of both 3 and 5 
    {
    cout<<"Divisible by 3 and 5 not by 15."<<endl;
    }
    else
    {
    cout<<"Divisible by 15 or Not Divisible by 3 or 5 ."<<endl;
    }

    return 0;
}


