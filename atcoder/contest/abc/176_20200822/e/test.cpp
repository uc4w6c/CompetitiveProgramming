#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int H, W;
    cin >> H >> W;
    bool bomp[H][W];
    // debug
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (bomp[i][j]) {
                cout << "true,";
            } else {
                cout << "false,";
            }
        }
        cout << endl;
    }
}
