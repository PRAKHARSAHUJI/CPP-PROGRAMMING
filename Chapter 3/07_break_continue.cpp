//                                            BREAK 
/*

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 100; i++)
    {
        cout << i << endl;
        if (i == 2)
            break;
    }
}
*/ 
/*

#include <iostream>
using namespace std ;
int main()
{
for(int i =0; i<100 ; i++)
{
cout<< i <<endl;
if(i==2){
break;
}
}
}
*/
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


//                                           CONTINUE
/*
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 100; i++)
    {
        if(i==2)
        continue;                                 // OUTPUT is ------>  0 1 3 4 5  means 2 will not be printed
        cout << i << endl;                        // when value of i is 2 it continue the loop  
        if (i == 5)
            break;
    }
}

*/