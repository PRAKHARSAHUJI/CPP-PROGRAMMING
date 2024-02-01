#include<iostream>
using namespace std;
int main()
    {
    int n;
    cout<<"Enter The number whose table to be printed : ";
    cin>>n;
    
    for(int i=n;i<=n*10;i+=n)
    {
     cout<<i<<endl;
    }
    //     for(int i=n;i<=n*10;i++)
    // {if(i%n==0)
    //  cout<<i<<endl;
    // }

    return 0;
}