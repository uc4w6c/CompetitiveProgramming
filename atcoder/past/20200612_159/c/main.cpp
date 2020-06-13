#include <bits/stdc++.h>
using namespace std;

// C - Maximum Volume
// 以下わからなかった
int main() {
    int L;
    cin >> L;

    double side = (double)(L / 3);
    long long sideLL = side * 100;
    long long resultLL = (sideLL * sideLL * sideLL);
    double result = (double)(resultLL / 1000000);
    cout << result;
    // cout << ((side * side * side) / 1000000);
}
