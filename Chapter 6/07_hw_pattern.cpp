#include <iostream>
using namespace std;
int main()
{
 char ch;
 cin>>ch;
 char x;
 cin>>x;

 for (int i =int(ch);i<=int (x);i++)
 {
 for (int y =int(ch);y<=int (x);y++)
 {
    cout<<char(i)<<" ";
 }

    cout<<endl;

 }
}