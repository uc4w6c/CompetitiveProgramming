#include <bits/stdc++.h>
using namespace std;

// 
// とりあえずやってみる
int main() {
    int K = 3;
    for (int i = 1; i < 100; i++) {
        cout << K * i << endl;
    }
    cout << "41 * 1897" << 41 * 1897 << endl;
    cout << 7777 / 101 << endl;
    cout << 101 * 7 << endl;
    cout << 999983 * 7 << endl;
    cout << "---" << endl;
    for (int i = 2; i < 100; i++) {
        if (7777 % i == 0) {
            cout << i << " " << 7777 / i << endl;
        }
    }
    cout << "---" << endl;
    for (int i = 2; i < 10000; i++) {
        if (77777 % i == 0) {
            cout << i << " " << 77777 / i << endl;
        }
    }
    cout << "---" << endl;
    for (int i = 2; i < 100000; i++) {
        if (777777 % i == 0) {
            cout << i << " " << 777777 / i << endl;
        }
    }
}
