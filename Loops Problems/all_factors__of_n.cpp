// #include <iostream>
// using namespace std;
// int main() 
// {
// int n;
// cout<<"Enter the number : ";
// cin>>n;
// int a;
// for (int i=1;i<=n;i++)
// {
//     if(n%i==0)
//     {
//       cout<<i<<" ";
//     }
   
// }
//   cout<< endl;

// return 0;
// }

//     *****************************   USING n/2 by highest factor is always less than 2 *********************************

// #include <iostream>
// using namespace std;
// int main() 
// {
// int n;
// cout<<"Enter the number : ";
// cin>>n;
// int a;
// for (int i=1;i<=n/2;i++)
// {
//     if(n%i==0)
//     {
//       cout<<i<<" ";
//     }
   
// }
//   cout<< endl;

// return 0;
// }


#include <iostream>
using namespace std;
int main() 
{
int n;
cout<<"Enter the number : ";
cin>>n;
int a;
for (int i=n/2;i>=1;i--)
{
    if(n%i==0)
    {
      cout<<i<<" ";
    }
   
}
  cout<< endl;

return 0;
}
