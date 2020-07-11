#include <bits/stdc++.h>
using namespace std;

int N;
map<long long, long long> cacheResult;

// 計算
long long f(int x, int y, int z) {
    return (pow(x, 2) + pow(y, 2) + pow(z, 2)) + (x * y + y * z + z * x);
}

// 無理やりだけど
void calcLoop(int end) {
    long long result;
    // -- 1つendパターン --
    // iが固定(これを3回繰り返すから3つプラスする)
    for (int j = 1; j < end; j++) {
        for (int k = 1; k < end; k++) {
            result = f(end, j, k);
            if (result > N) break;
            cacheResult[result] += 3;
        }
    }

    // -- 2つendパターン --
    // i,jが固定(これを3回繰り返すから3つプラスする)
    for (int k = 1; k < end; k++) {
        result = f(end, end, k);
        if (result > N) break;
        cacheResult[result] += 3;
    }

    // -- 3つendパターン --
    result = f(end, end, end);
    cacheResult[result]++;
}

int main() {
    cin >> N;

    for (int i = 1; i <= N; i++) {
        calcLoop(i);
        cout << cacheResult[i] << endl;
    }
}

