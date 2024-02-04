# include <iostream>
using namespace std;
int main()
{
int x;
cout<<"Size of int is : "<<sizeof(x);
cout<<endl;
char y;
cout<<"Size of char is : "<<sizeof(y);
cout<<endl;
float z;
cout<<"Size of Float is : "<<sizeof(z);
cout<<endl;
long a ;
cout<<"Size of long  is : "<<sizeof(a);
cout<<endl;
bool b ;
cout<<"Size of bool is : "<<sizeof(b);
cout<<endl;
long long c ;
cout<<"Size of long long is : "<<sizeof(c);
cout<<endl;
int s[]={1,3,4,6,7}  ;
cout<<"Size of array is : "<<sizeof(s);
cout<<endl;
}

// Size of int is : 4
// Size of char is : 1
// Size of Float is : 4
// Size of long  is : 8
// Size of bool is : 1
// Size of long long is : 8
// Size of array is : 20   means int has size 4 therefore array has 20 =4*5 