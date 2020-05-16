#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int nowT = 0;
    int nowX = 0;
    int nowY = 0;
    int T;
    int X;
    int Y;
    bool isOK = true;
    for (int i = 0; i < N; i++) {
        cin >> T >> X >> Y;
        for (int j = 0; j < T - nowT; j++) {
            // cout << nowX << ", " << nowY << endl;
            if ((X - nowX) != 0) {
                if (X - nowX > 0) {
                    nowX++;
                } else {
                    nowX--;
                }
            } else if (Y - nowY != 0) {
                if (Y - nowY > 0) {
                    nowY++;
                } else {
                    nowY--;
                }
            } else {
                // 残りが偶数ならOK
                if ((T - j) % 2 == 1) {
                    break;
                }
                isOK = false;
                break;
            }
        }
        if ((nowX != X) || (nowY != Y)) {
            isOK = false;
            break;
        }
    }
    if (isOK) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
