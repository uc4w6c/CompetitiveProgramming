#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    long long a = pow(10, 18);
    cout << a << endl;
    long long b = 5;
    long long counti = 0;
    while (a > b) {
        b *= 5;
        counti++;
        cout << b << endl;
    }
    cout << counti << endl;
}
