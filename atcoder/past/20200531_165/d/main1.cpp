#include <bits/stdc++.h>
using namespace std;

// D - Floor Function
// これだとTLEになる
int main() {
    long long A, B, N;
    cin >> A >> B >> N;

    long long result = -1;
    for (int x = 0; x <= N; x++) {
        long long tmp = floor(A * x / B) - A * floor(x / B);
        if (result > 0 && tmp == 0) break;
        result = max(result, tmp);
    }
    cout << result;
}
