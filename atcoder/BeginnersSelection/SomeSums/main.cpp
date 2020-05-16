#include <bits/stdc++.h>
using namespace std;


int sumDigit(int num) {
    int sum = 0;
    int i = 0;
    while(true) {
        int targetNum = (int((num * 10) / pow(10, (i + 1))));
        int roundNum = (int(num / pow(10, (i + 1))) * (pow(10, (i + 1))));
        sum += targetNum - roundNum;
        if (roundNum == 0) { 
            break;
        }
        i++;
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N;
    cin >> A;
    cin >> B;

    /*
    // これだと遅いみたい
    int matchSum = 0;
    for (int i = 0; i < N + 1; i++) {
        int sum = sumDigit(i);
        if (A <= sum && sum <= B) {
            matchSum += i;
        }
    }
    */
    int matchSum = 0;
    for (int i = 1; i <= N; i++) {
        int c = 0, t = i;
        for (int j = 0; j < 5; j++) {
            c += t % 10;  // 1の位の値を取得
            t /= 10;  // 1つ桁を繰り上げる
        }
        if (A <= c && c <= B) {
            matchSum += i;
        }
    }
    cout << matchSum;
}
