#include <bits/stdc++.h>
using namespace std;

// D - Line++
#define MAX 2000
int ans[MAX];
int N, X, Y;

void calc(int nowPoint) {
    if (nowPoint == N) {
        return;
    }
    for (int i = nowPoint + 1; i < N; i++) {
        // cout << "(" << nowPoint + 1 << ", " << i + 1 << ")";
        
        // これだと戻るケースが考慮されていない X -> Y - 1 みたいな
        // 開始地点 / 終了地点が X Yを跨ぐ
        if (nowPoint <= X && Y <= i) {
            // cout << " : " << (X - nowPoint) + (i - Y);
            ans[(X - nowPoint) + (i - Y) + 1]++;

        // 開始地点 / 終了地点が X Yの間ではない
        } else if (i <= X || Y <= nowPoint) {
            // cout << " : " << i - nowPoint;
            ans[i - nowPoint]++;

        // 開始地点 or 終了地点が X Yの間にあるとき
        } else {
            // ちょっと一旦雑に計算
            // 間違っている
            int minRoute = i - nowPoint;
            minRoute = (abs(nowPoint - X) + 1 + abs(i - Y) ,minRoute);
            // 開始地点がX 以上である場合
            /*if (nowPoint > X) {
                minRoute = ((nowPoint - X) + 1 + abs(i - Y) ,minRoute)
            } else {
                minRoute = (abs(nowPoint - X) + 1 + abs(i - Y) ,minRoute)
            }*/
            ans[minRoute]++;
        }
        // cout << endl;
    }
    calc(nowPoint + 1);
}

int main() {
    cin >> N >> X >> Y;
    X--;
    Y--;
    calc(0);
    for (int i = 1; i < N; i++) {
        cout << ans[i] << endl;
    }
}
