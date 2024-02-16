//                          ---------------------- Using Another Variable --------------------
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int a = 1;                               // a is the first term

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        a += 2;                              // a += 2 is the common difference
    }

    return 0;
}

