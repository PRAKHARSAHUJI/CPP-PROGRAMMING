
//                                      typedef is used to give another name to keyword



/*
#include <iostream>
using namespace std;
int main()

{
string name = "Prakhar Sahu";
int age = 20;
 
cout<< "My Name is : "<<name;
cout<< " and my Age is : "<<age;

return 0;      //                    ----------------------> Output is : My Name is: Prakhar Sahu and my Age is : 20
}           */   //                                            
//                                                           
// ----------------------------------------------------------------------------------------------------------------------------------------

/*
#include <iostream>
using namespace std;
typedef int my;
typedef string My;
int main()

{
// string name = "Prakhar Sahu";
// int age = 20;
My name = "Prakhar Sahu";
my age = 20;
 
cout<< "My Name is : "<<name<<endl;
cout<< "My Age is : "<<age << endl;

return 0;
}
*/


//                                       We Can also use using instead of type def

/*
#include <vector>
using namespace std;
// typedef int my;
// typedef string My;
using My = string;
using my = int;
int main()

{
// string name = "Prakhar Sahu";
// int age = 20;
My name = "Prakhar Sahu";
my age = 20;
 
cout<< "My Name is : "<<name<<endl;
cout<< "My Age is : "<<age << endl;

return 0;
}

*/


//                                       We Should also use _t while naming 



#include <iostream>
#include <vector>
#include <string>
using namespace std;
// typedef int my;
// typedef string My;
using My_t = std::string;
using my_t = int;
int main()

{
// string name = "Prakhar Sahu";
// int age = 20;
My_t name = "Prakhar Sahu";
my_t age = 20;
 
cout<< "My Name is : "<<name<<endl;
cout<< "My Age is : "<<age << endl;

return 0;
}

/*
#include <iostream>
#include <vector>
using namespace std;
// typedef int my;
// typedef string My;
using My_t = string;
using my_t = int;
int main()

{
// string name = "Prakhar Sahu";
// int age = 20;
My_t name = "Prakhar Sahu";
my_t age = 20;
 
cout<< "My Name is : "<<name<<endl;
cout<< "My Age is : "<<age << endl;

return 0;
}
*/