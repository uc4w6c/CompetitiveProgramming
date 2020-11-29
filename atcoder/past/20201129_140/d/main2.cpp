#include <bits/stdc++.h>
using namespace std;

int main() {
    // 考え方
    // 前から挟まれているやつを置き換えても同じかも。
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    char changeChar = S[0];
    bool changeContinue = false;
    int changeCount = 0;
    for (int i = 1; i < N; i++) {
        if (changeContinue) {
            if (S[i] != changeChar) {
                S[i] = changeChar;
            } else {
                if (changeCount == K) {
                    break;
                }
                changeContinue = false;
            }
        } else {
            if (S[i] != changeChar) {
                S[i] = changeChar;
                changeContinue = true;
                changeCount++;
            }
        }
    }

    int point = 0;
    for (int i = 0; i < N - 1; i++) {
        if (S[i] == S[i + 1]) {
            point++;
        }
    }
    cout << point;
}
