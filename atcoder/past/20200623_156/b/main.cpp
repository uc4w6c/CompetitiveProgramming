#include <bits/stdc++.h>
using namespace std;

// B - Digits
int main() {
    long long N, K;
    cin >> N >> K;

    long long count = 1;
    for (long long i = K; i <= N; i *= K) {
        count++;
    }
    cout << count;
}
// 10
// 1010  // 2数
// 12  // 8進数
// 2