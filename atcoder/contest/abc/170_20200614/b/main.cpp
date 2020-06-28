#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int X, Y;
    cin >> X >> Y;

    for (int i = 0; i <= X; i++) {
        if ((i * 2) + ((X - i) * 4) == Y) {
            // cout << i << ", " << (X - i);
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}
// 2x + 4(x - 1) = Y;

// 3 8
// 8本 3ひき
// 4 + (2 + 2)

/*
鶴 Aひき
亀 Bひき
a * 2  +  (3 - a) * 4 = 8
2a + 12 - 4a = 8
-2a = -4
a = 2
*/
