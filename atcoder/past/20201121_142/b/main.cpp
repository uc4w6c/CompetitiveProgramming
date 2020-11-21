#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int h[N];
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (h[i] >= K) cnt++;
    }
    cout << cnt;
}
