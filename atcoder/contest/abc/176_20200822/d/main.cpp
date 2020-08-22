#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int H, W;
    cin >> H, W;
    int CH, CW, DH, DW;
    cin >> CH >> CW >> DH >> DW;

    bool S[H][W];
    string s;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> s;
            if (s == '.') {
                S[i][j] = true;
            } else {
                S[i][j] = false;
            }
        }
    }

    


}
