#include <bits/stdc++.h>
using namespace std;

// 桁を増やしていって二分探索で調べるか
// 以下だと1つだけWA
long long A, B, X;

long long calc(long long left, long long right, int maxNumOfDigit, bool isFirst) {
    long long leftX = (A * left + B * (maxNumOfDigit - 1));
    long long rightX;
    if (isFirst) {
        rightX = (A * right + B * maxNumOfDigit);
    } else {
        rightX = (A * right + B * (maxNumOfDigit - 1));
    }

    // cout << "left:" << leftX << ", right:" << rightX << endl; // debug
    // cout << "left:" << left << ", leftX:" << leftX << endl; // debug
    // cout << "right:" << right << ", rightX:" << rightX << endl; // debug
    long long mid = (left + right) / 2;
    long long midX = (A * mid + B * (maxNumOfDigit - 1));
    // cout << "mid:" << mid << ", micX:" << midX << endl; // debug
    // cout << "---" << endl;

    if (leftX == X) return left;
    if (rightX == X) return right;

    // end
    if (mid == left || mid == right) {
        if (rightX < X) return right;
        else return left;
    }

    if (X < midX) return calc(left, mid, maxNumOfDigit, false);
    else return calc(mid, right, maxNumOfDigit, false);
};

int main() {
    cin >> A >> B >> X;

    int maxNumOfDigit = 1;
    long long maxN = 1;
    if ()
    while (true) {
        if (A * maxN + B * maxNumOfDigit == X) {
            cout << X;
            return 0;
        }
        if (A * maxN + B * maxNumOfDigit > X) {
            break;
        }
        maxNumOfDigit++;
        maxN *= 10;
    }

    // cout << maxN << endl; // debug
    long long N = calc(maxN / 10, maxN, maxNumOfDigit, true);
    if (N > 1000000000) cout << 1000000000;
    else cout << N;
}
// 1000000000
// 1000000000000000000
