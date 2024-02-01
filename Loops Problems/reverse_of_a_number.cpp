//                             ******************  NOT BEST METHOD ******************


// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ld;
//     int newnumber=0;
//     for(;n>0;)
//     {
//         if (n<10)
//         {
//             ld=n%10;
//         newnumber=(newnumber+ld);
//         break;
//         }
//         ld=n%10;
        
//         newnumber=(newnumber+ld)*10;
//         n=n/10;
//     }
//     cout<<"The Reversed Number is : "<<newnumber<<endl;
// }

//                             ****************** BEST METHOD ******************


// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ld;
//     int newnumber=0;
//     for(;n>0;)
//     {
//     ld=n%10;
//     newnumber=0*10+ld;
//     n=n/10;
//     }
//     cout<<"The Reversed Number is : "<<newnumber<<endl;
// }

//                             ****************** BESTEST METHOD ******************


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ld;
    int newnumber=0;
    while(n!=0)
    {
    ld=n%10;
    newnumber=0*10+ld;
    n=n/10;
    }
    cout<<"The Reversed Number is : "<<newnumber<<endl;
}