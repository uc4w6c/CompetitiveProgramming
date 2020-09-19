#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N;
    cin >> N;
    int sqrtN = sqrt(N);
    int ans = 0;
    for (int i = 1; i <= sqrtN ; i++) {
        for (int j = i; j < N; j++) {
            if (i * j >= N) break;
            if (i == j) ans++;
            else ans += 2;
        }
    }
    cout << ans;
}
