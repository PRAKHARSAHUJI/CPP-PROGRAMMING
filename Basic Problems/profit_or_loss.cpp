#include<iostream>
using namespace std;
int main(){ 
    int sp;
    int cp;
    cout<<"Enter the Selling Price of Article : ";
    cin >>sp;
    cout<<"Enter the Cost Price of Article : ";
    cin>>cp;
if(sp>cp)
{
    cout<<"There is Profit of Rs:"<<sp-cp<<endl;

}
else if(sp<cp)
{
    cout<<"There is loss of Rs:"<<cp-sp<<endl;
    
}
else
{
    cout<<"There is No Loss and No Profit "<<endl;
    
}


    return 0;
}