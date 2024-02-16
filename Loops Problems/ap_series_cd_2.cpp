#include<iostream>
using namespace std;
int main()
    {
    int n;
    cout<<"Enter The value of n : ";
    cin>>n;
    
    for(int i=-1;i<=2*n-3;i+=2)
    {
     cout<<i<<" ";
    }
    return 0;
}