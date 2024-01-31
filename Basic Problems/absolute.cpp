// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
// double n,a;
// cout<<"Enter the Number : ";
// cin>>n;
// a = abs(n);
// cout<<"The Absolute Value is : "<<a<<endl;


//     return 0;
// }



#include<iostream>
using namespace std;
int main(){

    double n,a;
    cout<<"Enter the Number : ";
    cin>>n;
    if(n>0)
    {
    cout<<"The Absolute Value is : "<<n<<endl;
    }
    else
    {
    cout<<"The Absolute Value is : "<<-n<<endl;
    }
// if you we need to simply change to absoulute value of number ; 
// if(n<0) n=-n; 

    return 0;
}