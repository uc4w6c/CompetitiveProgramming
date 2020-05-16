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
        int diff = abs(nowX - X) + abs(nowY - Y);
        cout << ((T - nowT) - diff) % 2 << endl;
        // ここで差分とTと一致 or あまりが割り切れる場合はOK
        if (diff - (T - nowT) > 0) {
            isOK = false;
            break;
        } else if (((T - nowT) - diff) % 2 == 1) {
            isOK = false;
            break;
        }
        nowT = T;
        nowX = X;
        nowY = Y;
    }
    if (isOK) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
