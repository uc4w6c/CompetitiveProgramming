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
        if (nowPoint <= X && Y <= i) {
            // cout << " : " << (X - nowPoint) + (i - Y);
            ans[(X - nowPoint) + (i - Y) + 1]++;
        } else {
            // cout << " : " << i - nowPoint;
            ans[i - nowPoint]++;
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
