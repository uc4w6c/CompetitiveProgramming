#include <bits/stdc++.h>
using namespace std;

// 
// 大きい値を考慮しない場合
int main() {
    long long test = pow(10, 9);
    long long ans = test * (pow(10, 5) * 2);
    cout << ans << endl;
    ans *= test;
    cout << ans << endl;
}
// 1000000000
// 1000000000000000000