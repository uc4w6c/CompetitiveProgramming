#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    long long Y = pow(10, 18);
    long long X = 1;
    long long count = 0;
    while (Y > X) {
        X *= 2;
        count++;
    }
    cout << Y << endl;
    cout << count;
}
