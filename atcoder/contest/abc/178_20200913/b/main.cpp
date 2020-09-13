#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    bool aMinus = false, bMinus = false;
    if (a < 0 && b < 0) {
        aMinus = true;
    }
    if (c < 0 && d < 0) {
        bMinus = true;
    }
    if (aMinus && bMinus) {
        cout << min(a, b) * min(c, d);
    } else if (aMinus) {
        cout << max(a, b) * min(c, d);
    } else if (bMinus) {
        cout << min(a, b) * max(c, d);
    } else {
        cout << max(a, b) * max(c, d);
    }
}
