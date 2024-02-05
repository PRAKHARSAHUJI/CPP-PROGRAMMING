# include <iostream>
using namespace std;
int main()
{

string s ="My Name Is Prakhar Sahu ";     
cout<<s<<endl;
cout<<s.length()<<endl;
cout<<s.size()<<endl;               // this has 25 size but it shows 24 size ; 1 is increased coz of \0
//                                  //  size and length both are same here .
string a ="Prakhar";
cout<<a.length()<<endl;
cout<<a.size()<<endl;               // this has 8 size but it shows 7 size; 1 is increased because of' \0 '


}