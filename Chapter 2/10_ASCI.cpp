//                             ---------------------- character to integer ---------------------------

// #include <iostream>

// using namespace std;
// int main()
// {
//     char x;
//     cin>>x;
//     cout<<"ASCII value of  " <<x<<" is:  ";                             // character to integer
//     cout<<(int)x<<endl;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     char x;
//     cin>>x;
//     int(y)=int(x) ;
//     cout<<"ASCII value of  " <<x<<" is:  ";
//     cout<<y<<endl;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     char x;
//     cin>>x;
//     cout<<"ASCII value of " <<x<<" is:  ";
//     cout<<int(x)<<endl;
// }

//                             ----------------------  integer to character ---------------------------

#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    char y=char(x);
    cout<<"ASCII value of  " <<x<<" is :  ";
    cout<<y<<endl;
    return 0;
}
