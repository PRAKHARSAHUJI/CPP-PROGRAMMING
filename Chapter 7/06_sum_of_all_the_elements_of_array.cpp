// # include <iostream>
// using namespace std;
// int main()
// {
// int sum=0;
// int arr[]={1,1,1,1,1};
// for(int i=0;i<5;i++)
// {

//     sum+=arr[i];
// }
// cout<<"The Sum of the elements of an array is : "<<sum<<endl;
// cout<<endl;

// }

# include <iostream>
using namespace std;
int main()
{
int sum=0;
int n;
cout<<"Enter the number of elements to be taken in array : ";
cin>>n;
int arr[n];
cout<<"Enter all the elements of an array: ";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<endl;
for(int i=0;i<5;i++)
{

    sum+=arr[i];
}
cout<<"The Sum of the elements of an array is : "<<sum<<endl;
cout<<endl;

}