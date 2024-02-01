#include <iostream>
using namespace std;
int main()
{
    int n,ld;
    cin>>n;
    int product=1;
    for(;n>0;)
    {
        ld=n%10;
        product*=ld;
        n=n/10;

    }
    cout<<"The Product of the Digits is : "<<product<<endl;
}