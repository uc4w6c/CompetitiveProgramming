#include <bits/stdc++.h>
using namespace std;

// 例文を逆から表示
int main() {
    int num = 2;
    int ans = 1;
    for (int i = 1; i < 50; i++) {
        ans *= (num * i);
        cout << num * i << " : " << ans << endl;
    }
}
