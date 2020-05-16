#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int Y;
    cin >> Y;

    if (Y % 1000 != 0) {
        cout << "-1 -1 -1";
        return 0;
    }

    for (int i = 0; i < N + 1; i++) {
        if (i * 10000 > Y) {
            break;
        }
        for (int j = 0; j < N + 1 - i; j++) {
            if (i * 10000 + j * 5000 > Y) {
                break;
            }
            int k = N - i - j;
            if (i * 10000 + j * 5000 + k * 1000 == Y) {
                cout << i << " " << j << " " << k;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1";
}
