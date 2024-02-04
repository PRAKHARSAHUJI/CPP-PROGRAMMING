
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
    cout<<"[";
  for (int i=0;i<n;i++)
 {
    cout<<arr[i]<<" ";
 }
    cout<<"]";


}