#include <bits/stdc++.h>
using namespace std;

// F - Silver Fox vs Monster
// 考え方はあっている?
int main() {
    int N;
    long long D, A;
    cin >> N >> D >> A;
    long long hMax = pow(10, 9) + 1;
    vector<long long> H(hMax);
    long long leftPoint = hMax;
    long long X;
    for (int i = 0; i < N; i++) {
        cin >> X;
        leftPoint = min(X, leftPoint);
        cin >> H[X];
    }

    long long atackCount = 0;
    while (leftPoint < hMax) {
        while (H[leftPoint] > 0) {
            for (long long i = 0; i <= D * 2 + 1 && leftPoint + i < hMax; i++) {
                if (H[leftPoint + i] > 0) {
                    H[leftPoint + i] -= A;
                }
            }
            atackCount++;
        }
        leftPoint++;
    }
    cout << atackCount;
}
