//                                    *********************  I   ****************************


// #include <iostream>
// using namespace std;
// int main() 
// {
// int n;
// cout<<"Enter the number : ";
// cin>>n;
// int a=0;

// if(n==1 ){
//     cout<<"Neither a Composite Number nor a prime number "<< endl;
//     a=1;
// }
// for (int i =n-1;i>1;i--)
// {
//   if(n%i==0)
// {
//     cout<<"Composite Number"<< endl;
//     a=1;
//     break;
// }
// }
// // if(n==1 && a==0)
// //     cout<<"Neither a Composite Number nor a prime number "<< endl;
// // if(a==0 && n!=1)
// //     cout<<"Not a Composite Number"<< endl;


// if(a==0)
//     cout<<"Not a Composite Number"<< endl;
// return 0;
// }


//                                    *********************  II  ****************************




// #include <iostream>
// using namespace std;
// int main() 
// {
// int n;
// cout<<"Enter the number : ";
// cin>>n;
// int a=0;

// if(n==1 )
// {
//     cout<<"Neither a Composite Number nor a prime number "<< endl;
//     a=1;
// }
// for (int i =n-1;i>1;i--)
// {
//   if(n%i==0)
// {
//     cout<<"Composite Number"<< endl;
//     a=1;
//     break;
// }
// }

// if(n==1 && a==0)
//     cout<<"Neither a Composite Number nor a prime number "<< endl;
// if(a==0 && n!=1)
//     cout<<"Not a Composite Number"<< endl;


// if(a==0)
//     cout<<"Not a Composite Number"<< endl;
// return 0;
// }


//                                    *********************  III   ****************************



// #include <iostream>
// using namespace std;
// int main() 
// {
// int n;
// cout<<"Enter the number : ";
// cin>>n;
// int a=0;

// // if(n==1 )
// // {
// //     cout<<"Neither a Composite Number nor a prime number "<< endl;
// //     a=1;
// // }
// for (int i =2;i<=n/2;i--)
// {
//   if(n%i==0)
// {
//     cout<<"Composite Number"<< endl;
//     a=1;
//     break;
// }
// }
// if(n==1 && a==0)
//     cout<<"Neither a Composite Number nor a prime number "<< endl;
// if(a==0 && n!=1)
//     cout<<"Not a Composite Number"<< endl;


// // if(a==0)
// //     cout<<"Not a Composite Number"<< endl;
// return 0;
// }





//                                    *********************  IV   ****************************



#include <iostream>
using namespace std;
int main() 
{
int n;
cout<<"Enter the number : ";
cin>>n;
int a=0;

for (int i =n-1;i>1;i--)
{
  if(n%i==0)
{
    a=1;
    break;
}
}
if(n==1)
    cout<<"Neither a Composite Number nor a prime number "<< endl;
else if (a==1)
    cout<<"Composite Number"<< endl;
else
    cout<<"Not a Composite Number"<< endl;
return 0;
}