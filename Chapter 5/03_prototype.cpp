/*
#include <iostream>
using namespace std ;

void g(){
cout<<"Hello Mate, Myself Prakhar Sahu";

}

int main ()
{


g();
return 0;

}

*/


// firstly we declared function above that we are going to use void function .
// then also we can put the function that is to be called anywhere.

#include <iostream>
using namespace std ;

void g(void);
// void g();               also acceptable
 
int main ()
{


g();
return 0;

}

void g(){
cout<<"Hello Mate, Myself Prakhar Sahu";

}

