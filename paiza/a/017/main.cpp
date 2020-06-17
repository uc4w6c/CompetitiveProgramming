#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int H, W, N;
    cin >> H >> W >> N;

    bool a[H][W];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            a[i][j] = false;
        }
    }

    for (int i = 0; i < N; i++) {
        int h, w, x;
        cin >> h >> w >> x;

        int setPoint = H - 1;
        for (int j = 0; j < H; j++) {
            for (int k = x; k < x + w; k++) {
                if (a[j][k]) {
                    setPoint = j - 1;
                    break;
                }
            }
            if (setPoint != H - 1) break;
        }

        for (int j = setPoint; j >= setPoint - h + 1; j--) {
            for (int k = x; k < x + w; k++) {
                a[j][k] = true;
            }
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (a[i][j]) {
                cout << "#";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}
/* 
7 10 1
1 1 0



*/