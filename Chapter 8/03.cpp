# include <iostream>
using namespace std;
int main()
{

string s;
// cin>>s;                   //  Prakhar Sahu 
// cout<<s<<endl;            //  If you input string it will before the space one only 

getline(cin,s);             // If we use this it will print completely 
cout<<s<<endl;              // whole string including space 
} 