#include <bits/stdc++.h>
using namespace std;

// 時間を気にせず実現する
long long n, a, b;
long long resultSum = 0;

void check(long long endCount, long long num, long long nowCount) {
    if (nowCount == endCount) {
        resultSum++;
        return;
    }
    for (long long i = num; i <= n; i++) {
        check(endCount, i + 1, nowCount + 1);
    }
}

int main() {
    cin >> n >> a >> b;

    long long iCount = 0; // debug
    for (long long i = 1; i <= n; i++) {
        /*
        if (i == a || i == b) {
            continue;
        }
        */
        check(i, 1, 0);
        cout << i << " : " << resultSum - iCount << endl;
        iCount = resultSum;
    }
    cout << resultSum;
}
