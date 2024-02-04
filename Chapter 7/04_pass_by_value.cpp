# include <iostream>
using namespace std;
void change(int n)
{
n=8;
}

int main()
{
int n=5;
cout<<n<<endl;
change(n);
cout<<n<<endl;
}

// Here the value doesn't change .it uses pass by value 