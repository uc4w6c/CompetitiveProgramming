#include <bits/stdc++.h>
using namespace std;

// 例文を逆から表示
int main() {
    int num = 2;
    int ans = 1;
    for (int i = 1; i < 10; i++) {
        ans *= (num * i);
        cout << num * i << " : " << ans << endl;
    }
    cout << "-------" << endl;
    num = 100;
    ans = 100;
    for (int i = 1; i < 10; i++) {
        ans *= (num - i * 2);
        cout << (num - i * 2) << " : " << ans << endl;
    }
}
// つまり末尾の0はそのまま保持されるのでカウントして、最終の桁を後続の計算に使えばOK