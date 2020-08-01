#include <bits/stdc++.h>
using namespace std;

// D - Caracal vs Monster
int main() {
    long long H;
    cin >> H;
    long long point = 2;
    while (point <= H) {
        point *= 2;
    }
    cout << point - 1;
}
// max: 1000000000000
// 1099511627775
// 1099511627775
