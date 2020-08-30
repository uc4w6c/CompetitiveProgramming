#include <bits/stdc++.h>
using namespace std;

// 
// 大きい値を考慮しない場合
int main() {
    long long test = pow(10, 9);
    cout << test << endl;
    cout << test * test << endl;

    long long ans = test * test * (pow(10, 5) * 2);
    cout << ans;
}
// 1000000000
// 1000000000000000000