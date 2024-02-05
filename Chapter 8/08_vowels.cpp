# include <iostream>
using namespace std;
int main()
{
int count=0;
string s;
getline(cin,s);

for(int i=0; i<s.length();i++)
{
    if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
    {
        count++;
    }
}
cout<<"Total Vowels in given string is : "<<count<<endl;
}