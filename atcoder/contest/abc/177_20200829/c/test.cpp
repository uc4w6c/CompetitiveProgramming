#include <bits/stdc++.h>
using namespace std;

// 
// 大きい値を考慮しない場合
int main() {
    int ans = 2 * 2;
    ans += 3 * 3;
    ans += 4 * 4;
    cout << ans << endl;
    cout << ans % 9 << endl;

    ans = 2 * 2;
    ans %= 9;
    ans += 3 * 3;
    ans %= 9;
    ans += 4 * 4;
    ans %= 9;
    cout << ans << endl;

}