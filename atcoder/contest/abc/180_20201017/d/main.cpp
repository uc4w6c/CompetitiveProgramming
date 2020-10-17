#include <bits/stdc++.h>
using namespace std;

// 以下は極端パターン
int main() {
    long long X, Y, A, B;
    cin >> X >> Y >> A >> B;
    long long maxEx = 0;

    long long ex = 0;
    long long strong = X;
    long long baibaiCount = 0;
    long long baibaiStrong = X;
    while (true) {
        if (baibaiStrong > Y) break;

        ex = baibaiCount;
        ex += floor((Y - baibaiStrong) / B);
        maxEx = max(ex, maxEx);

        baibaiCount++;
        baibaiStrong *= A;
    }
    cout << maxEx;
}
