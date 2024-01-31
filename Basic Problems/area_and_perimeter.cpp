#include<iostream>
using namespace std;
int main(){
    int l , b,area,perimeter;
    
cout<<"Enter the length of Rectangle : "<<endl;
cin>>l;
cout<<"Enter the breadth of Rectangle : "<<endl;
cin>>b;
area = l*b;
perimeter = 2*(l+b);
if(area>perimeter)
{
cout<<"Area is Greater "<<endl;
}
else
{
cout<<"Perimeter is Greater "<<endl;
}



    return 0;
}