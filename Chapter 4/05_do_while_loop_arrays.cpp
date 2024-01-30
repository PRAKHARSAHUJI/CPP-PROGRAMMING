#include <iostream>
using namespace std;

int main()
{
int mathsmarks[4];
    mathsmarks[0]=99;
    mathsmarks[1]=93;  
    mathsmarks[2]=97;
    mathsmarks[3]=95;

int i=0;
do
{
cout<<"Marks Of Maths "<<i<<" is "<<mathsmarks[i]<<endl;
i++;
}while(i<4);

cout<< "Address of array mathsmarks is "<<mathsmarks ;
return 0;

}