#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    long long a = pow(10, 18);
    long long b = 3;
    long long counti = 0;
    while (a > b) {
        b *= 3;
        counti++;
        cout << b << endl;
    }
    cout << counti << endl;

    long long test = pow(3, 0);
    cout << test;
}
