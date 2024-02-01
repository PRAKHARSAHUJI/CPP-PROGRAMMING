// #include<iostream>
// using namespace std;
// int main(){
// int n ;
// cin >>n;

// int count=0;
// for(int i =1;i>0;i++) 
// {
// if(n>0)
// {
//     n=n/10;
//     count+=1;

// }
// if( n==0) 
// break;
// }
// cout<<count<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int i = 1; true; i++) {
        if (n > 0) {
            n = n / 10;
            count += 1;
        } else {
            break;
        }
    }

    cout << count << endl;
    return 0;
}
