#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    // long long N = 4;
    int ans = 0;
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {
                for (int l = 0; l <= 9; l++) {
                    if (i != 0 && j != 0 && k != 0 && l != 0) continue;
                    if (i != 9 && j != 9 && k != 9 && l != 9) continue;
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;

    ans = 0;
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {
                int l = 5;
                if (i != 0 && j != 0 && k != 0 && l != 0) continue;
                if (i != 9 && j != 9 && k != 9 && l != 9) continue;
                ans++;
            }
        }
    }
    cout << ans << endl;

    ans = 0;
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
                int k = 5;
                int l = 5;
                if (i != 0 && j != 0 && k != 0 && l != 0) continue;
                if (i != 9 && j != 9 && k != 9 && l != 9) continue;
                ans++;
        }
    }
    cout << ans << endl;
}
// 4 - 974
// 3 - 54
// 2 - 2

// 4 - 1200 (重複のぞいていない)
