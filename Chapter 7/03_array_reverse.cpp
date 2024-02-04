# include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of array element to be taken: ";
    cin >>n;

 int arr[n];
 for (int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
    cout<<endl;
    cout<<"[";
  for (int i=0;i<n;i++)
 {
    cout<<arr[i]<<" ";
 }
    cout<<"]"<<endl;
    cout<<endl;
    cout<<endl;
for(int i =n-1;i>=0;i--)
{
    cout<<arr[i]<<" "<<endl;
}

}




// Accessing elements is done through arr[]

