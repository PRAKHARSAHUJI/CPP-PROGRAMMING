//                           Arrays Address comes by writing array name it does not need "&" before array name

#include <iostream>
using namespace std;

int main()
{
int mathsmarks[4];
    mathsmarks[0]=99;
    mathsmarks[1]=93;  
    mathsmarks[2]=97;
    mathsmarks[3]=95;

    cout<< endl ;

    cout<< "Address of array mathsmarks is "<<mathsmarks<< endl ;


 int *x = mathsmarks;
    cout<< "Address of array mathsmarks by another variable is "<<x<< endl ;

    cout<< endl ;


    cout<< "Address of array mathsmarks[1] is "<<mathsmarks+1<< endl ;
    cout<< "Address of array mathsmarks[2] is "<<mathsmarks+2<< endl ;
    cout<< "Address of array mathsmarks[3] is "<<mathsmarks+3<< endl ;


    cout<< "Address of array mathsmarks by another variable [1] is "<<x+1<< endl ;
    cout<< "Address of array mathsmarks by another variable [2] is "<<x+2<< endl ;
    cout<< "Address of array mathsmarks by another variable [3] is "<<x+3<< endl ;

    cout<< endl ;
    cout<<"Method 1 :" <<endl ;

    cout<< "Value of array mathsmarks by another variable is "<<*x<< endl ;
    cout<< "Value of array mathsmarks by another variable is "<<*(x+1)<< endl ;
    cout<< "Value of array mathsmarks by another variable is "<<*(x+2)<< endl ;
    cout<< "Value of array mathsmarks by another variable is "<<*(x+3)<< endl ;


    cout<< endl ;
    cout<<"Method 2 :" <<endl ;

    cout<< "Value of array mathsmarks by another variable is "<<*x<< endl ;

    x++;
    cout<< "Value of array mathsmarks by another variable is "<<*(x)<< endl ;

    x++;
    cout<< "Value of array mathsmarks by another variable is "<<*(x)<< endl ;

    x++;
    cout<< "Value of array mathsmarks by another variable is "<<*(x)<< endl ;

return 0;

}