//                                    Ternary Operator is the replacement of If else 
//                                    Condition ? Expression 1 : Expression 2 ;
/*

#include <iostream>
using namespace std;
int main ()
{
int Grade = 75;
if(Grade>40)
cout<<"Pass"<<endl;
else
cout<<"Fail"<<endl;
return 0;


}
*/

#include <iostream>
using namespace std;
int main ()
{
    int Grade = 75;
Grade >= 40 ? (cout<<"Pass") : cout<<"Fail"<<endl ;

return 0;
}
