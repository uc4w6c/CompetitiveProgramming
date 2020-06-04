#include <bits/stdc++.h>
using namespace std;

// C - Sum of gcd of Tuples (Easy)
int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main() {
    int K;
    cin >> K;
    int sum = 0;
    for (int i = 1; i <= K; i++) {
        for (int j = 1; j <= K; j++) {
            for (int k = 1; k <= K; k++) {
                sum += gcd(gcd(i, j), k);
            }
        }
    }
    cout << sum;
}
