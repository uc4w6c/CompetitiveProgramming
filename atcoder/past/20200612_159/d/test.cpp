#include <bits/stdc++.h>
using namespace std;

// 桁数確認
int main() {
    // int -  2147483647
    // long - 2147483647
    // long long 18,446,744,073,709,551,615

    int testInt = pow(10, 5) * 2;
    long long testLL = pow(10, 5) * 2;
    cout << "int:" << testInt << endl;
    cout << "long long:" << testLL << endl;

    cout << "int (x * x - 1) / 2:" << ((testInt * (testInt - 1)) / 2) << endl;
    cout << "long long (x * x - 1) / 2:" << ((testLL * (testLL - 1)) / 2) << endl;

    cout << "int 10^10: " << (int)pow(10, 10) << endl; // これはだめになる
    cout << "long long 10^10: " << (long long)pow(10, 10) << endl;
}
