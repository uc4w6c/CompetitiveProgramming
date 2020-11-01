#include <bits/stdc++.h>
using namespace std;

// 

int main() {
    int N;
    cin >> N;

    int X[N][2];
    int x, y;
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        X[i][0] = x;
        X[i][1] = y;
    }

    int xWaru;
    int match;
    for (int i = 0; i < N - 1; i++) {
        match = 0;
        for (int j = i + 1; j < N; j++) {
            if (match >= 2) {
                cout << "Yes";
                return 0;
            }
            if (X[j][0] == 0 || X[i][0] == 0) {
                if (X[j][0] != X[i][0]) {
                    continue;
                }
                cout << "Yes";
                return 0;
            }
            if (X[j][1] == 0 || X[i][1] == 0) {
                if (X[j][1] != X[i][1]) {
                    continue;
                }
                cout << "Yes";
                return 0;
            }

            if (X[i][0] < X[j][0]) {
                if (X[j][0] % X[i][0] != 0) {
                    continue;
                }
                if (X[j][1] % X[i][1] != 0) {
                    continue;
                }
                xWaru = X[j][0] / X[i][0];
                if (X[j][0] / X[i][1] == xWaru) {
                    cout << "Yes";
                    return 0;
                }
            } else {
                if (X[i][0] % X[j][0] != 0) {
                    continue;
                }
                if (X[i][1] % X[j][1] != 0) {
                    continue;
                }
                xWaru = X[i][0] / X[j][0];
                if (X[i][0] / X[j][1] == xWaru) {
                    cout << "Yes";
                    return 0;
                }
            }
        }
    }
    cout << "No";
    return 0;
}
