#include <bits/stdc++.h>
using namespace std;

void coinSum(long N, int *sum, int *coin, int A, int B, int C, int D) {
    // cout << "IN" << endl;
    cout << "SUM:" << *sum << endl;
    cout << "coin:" << *coin << endl;
    // 超えているならマイナス
    if (*sum > N) {
        // cout << "Minus";
        *sum--;
        *coin += D;
        return;
    }

    /*
    cout << "A:" << A << endl;
    cout << "B:" << B << endl;
    cout << "C:" << C << endl;
    cout << "D:" << D << endl;
    */

    double addA = (double)A / *sum;
    double addB = (double)B / (*sum * 2);
    double addC = (double)C / (*sum * 4);
    double addD = (double)D;  // D / 1;

    /*
    cout << "addA:" << addA << endl;
    cout << "addB:" << addB << endl;
    cout << "addC:" << addC << endl;
    cout << "addD:" << addD << endl;
    */

    // MEMO: 以下の場合Nをsumが超えた場合が考慮できていない。絶対値から計算する必要あり
    if (*sum * 5 < N) {
        // ロジック汚いけど一旦しょうがない
        // Aが一番小さいとき
        if (addA <= addB && addA <= addC && addA <= addD) {
            // cout << "A" << endl;
            *sum *= 2;
            *coin += A;
            return;
        }

        if (addB <= addA && addB <= addC && addB <= addD) {
            // cout << "B" << endl;
            *sum *= 3;
            *coin += B;
            return;
        }

        if (addC <= addA && addC <= addB && addC <= addD) {
            // cout << "C" << endl;
            *sum *= 5;
            *coin += C;
            return;
        }

        /*if (addD < addA && addD < addB && addD < addC) {
            cout << "D" << endl;
            *sum += 1;
            *coin += D;
            return;
        }*/
        // cout << "D" << endl;
        *sum += 1;
        *coin += D;
        return;
        
    } else {
        // ここまできたら残りはそれぞれをかけたもの + 差分の1の合計だから簡単なはず
        int coinA = A + (abs(N - (*sum * 2)) * D);
        int coinB = B + (abs(N - (*sum * 3)) * D);
        int coinC = C + (abs(N - (*sum * 5)) * D);
        int coinD = (abs(N - *sum) * D);

        cout << "coinA:" << coinA << endl;
        cout << "coinB:" << coinB << endl;
        cout << "coinC:" << coinC << endl;
        cout << "coinD:" << coinD << endl;

        *sum = N;
        if (coinA <= coinB && coinA <= coinC && coinA <= coinD) {
            *coin += coinA;
            return;
        }
        if (coinB <= coinA && coinB <= coinC && coinB <= coinD) {
            *coin += coinB;
            return;
        }
        if (coinC <= coinA && coinC <= coinB && coinC <= coinD) {
            *coin += coinC;
            return;
        }
        *coin += coinD;
        return;
    }
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int sum = 0;
        int coin = 0;
        long N;
        cin >> N;
        int A, B, C, D;
        cin >> A >> B >> C >> D;

        sum = 1;
        coin += D;
        // int j = 0;
        while (sum != N) {
            coinSum(N, &sum, &coin, A, B, C, D);
            // break;
            /*if (j > 4) {
                break;
            }
            j++;*/
        }
        cout << coin << endl;
    }
}

// 32 10 8 5 4 の答え
// これが今はできていない
/*
1
5
6
30
31
32
*/
