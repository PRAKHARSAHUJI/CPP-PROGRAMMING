#include<iostream>
using namespace std;
int main()
    {
    int n;
    cout<<"Enter The value of n : ";
    cin>>n;
    
    for(int i=4;i<=3*n+1;i+=3)                     // using nth term
    {
     cout<<i<<" ";
    }
    return 0;
}