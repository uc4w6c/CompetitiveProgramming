#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];

    // 最初の購入ポイントを確認
    int firstBuyPoint = N;
    int nextUp = A[N - 1];
    for (int i = N - 1; i >= 0; i--) {
        if (A[i] < nextUp) {
            firstBuyPoint = i;
            nextUp = A[i];
        } else if (A[i] > nextUp) {
            nextUp = A[i];
        }
    }

    // cout << firstBuyPoint << endl;  // debug
    // cout << nextUp << endl;  // debug

    // 購入ポイントがないなら終了
    if (firstBuyPoint == N) {
        cout << 1000;
        return 0;
    }

    long long haveSuryo = 1000 / A[firstBuyPoint];
    long long haveMoney = 1000 - A[firstBuyPoint] * haveSuryo;
    int havePrice = A[firstBuyPoint];  // 購入単価
    int nextBuyPoint = 0;
    for (int i = firstBuyPoint + 1; i < N; i++) {
        if (i <= nextBuyPoint) {
            continue;
        }

        // 売るタイミング調整
        if (havePrice < A[i]) {
            haveMoney += A[i] * haveSuryo;
            haveSuryo = 0;
            havePrice = 0;
        }

        // 買うタイミング調整
        if (haveSuryo == 0) {
            int nowPrice = A[i];
            int nowPoint = i;
            for (int j = i + 1; j < N; j++) {
                if (nowPrice < A[j]) {
                    nextBuyPoint = nowPoint;

                    //　購入処理
                    haveSuryo = haveMoney / A[nowPoint];
                    haveMoney -= A[nowPoint] * haveSuryo;
                    havePrice = A[nowPoint];
                    break;
                }

                if (A[j] < nowPrice) {
                    nowPrice = A[j];
                    nowPoint = j;
                }
            }
        }
    }
    cout << haveMoney;
 }
