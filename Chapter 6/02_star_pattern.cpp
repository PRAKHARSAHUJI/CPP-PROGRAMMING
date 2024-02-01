#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the value of Rows 'm' and Columns 'n' in pattern of m x n rows , columns  you want : ";
    cin>>m;
    cin>>n;
    for(int i=1;i<=m;i++)
    {
        for (int i=1;i<=n;i++)
        {
        cout<<"* ";
        }
        cout<<endl;
    }
}
