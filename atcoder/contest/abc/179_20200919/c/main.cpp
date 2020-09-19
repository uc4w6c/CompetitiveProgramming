#include <bits/stdc++.h>
using namespace std;

// 一旦怪しい計算量のやつ
// 間違っている
int main() {
    int N;
    cin >> N;
    int sqrtN = sqrt(N) + 1;
    int ans = 0;
    for (int i = 1; i <= sqrtN ; i++) {
        for (int j = 1; j <= sqrtN; j++) {
            if (i * j < N) {
                ans++;
            }
        }
    }
    cout << ans;
}
