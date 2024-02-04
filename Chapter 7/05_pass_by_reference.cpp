# include <iostream>
using namespace std;
void change(int arr[])
{
    arr[0]=4;
}

int main()
{

int arr[]={3,5,7,2,9};
for(int i=0;i<5;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
change(arr);
for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
}
// Here value changes because of pass by reference 