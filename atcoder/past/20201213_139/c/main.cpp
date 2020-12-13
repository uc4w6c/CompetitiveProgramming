#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long H[N];
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    int now = 0;
    int maxCnt = 0;
    for (int i = 1; i < N; i++) {
        if (H[i - 1] >= H[i]) {
            now++;
        } else {
            maxCnt = max(now, maxCnt);
            now = 0;
        }
    }
    maxCnt = max(now, maxCnt);
    cout << maxCnt;
}
