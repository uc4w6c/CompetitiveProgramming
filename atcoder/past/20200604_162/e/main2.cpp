#include <bits/stdc++.h>
using namespace std;

int N, K;
long long total = 0;
// E - Sum of gcd of Tuples (Hard)
int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

// 再帰処理にする
int sum(int n, int k) {
    if (n == N) {
        // cout << k << endl;
        total += k;
        return total;
    }
    for (int i = 1; i <= K; i++) {
        int max;
        // これ無理やりだな。初回だけどうしようかと思い暫定
        if (k == 0) {
            max = i;
        } else {
            max = gcd(k, i);
        }
        sum(n + 1, max);
    }
    return total;
}

// 一回普通に作るけど、この処理はかなり遅い。
// Kは固定だからループの数は減らせる
int main() {
    cin >> N >> K;
    sum(0, 0);

    long long modNum = (pow(10, 9) + 7); 
    cout << (total % modNum);
}
// 10813692
// 10813692