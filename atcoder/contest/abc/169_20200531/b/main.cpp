#include <bits/stdc++.h>
using namespace std;

// 
bool is_product_overflow(long long a, long long b) {
    long long prod = a * b;
    return (prod / b != a);
}

int main() {
    int N;
    cin >> N;
    long long total = 0;
    long long MAX = pow(10, 18);
    bool isMax = false;
    // cout << MAX << endl;
    for (int i = 0; i < N; i++) {
        long long A;
        cin >> A;
        if (i == 0) {
            total += A;
        } else {
            if (isMax) {
                if (A == 0) {
                    total = 0;
                    break;
                }
            } else {
                if (is_product_overflow(total, A)) {
                    total = MAX + 1;
                    break;
                }
                total *= A;
            }
        }
        if (total > MAX) {
            isMax = true;
        }
    }
    if (total > MAX) {
        cout << -1;
        return 0;
    }
    cout << total;
}
// 1000000000000000000
// 999999999999999999

// 100000000000000000 10

// OK 1000000000000000000
// NG 1000000000000000001
