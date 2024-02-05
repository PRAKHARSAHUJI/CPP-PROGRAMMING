#include <iostream>
using namespace std ;
int main ()
{

    int n;
    cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int minimum =arr[0];
for(int i=0;i<n;i++)
{
    if(minimum >arr[i])
    minimum=arr[i];
}

cout<<minimum<<endl;
}



