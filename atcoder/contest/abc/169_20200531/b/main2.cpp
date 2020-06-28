#include <bits/stdc++.h>
using namespace std;

// 
bool is_product_overflow(long long a, long long b) {
    long long prod = a * b;
    /*cout << prod << endl;
    cout << prod / b << endl;
    cout << a << endl;*/
    return (prod / b != a);
}

int main() {
    int N;
    cin >> N;
    long long MAX = 1e18;
    // cout << MAX << endl;

    long long A[N];
    for (int i = 0; i < N; i++) {
        long long a;
        cin >> a;
        if (a == 0) {
            cout << 0;
            return 0;
        }
        A[i] = a;
    }

    long long total = 0;
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            total += A[i];
        } else {
            if (is_product_overflow(total, A[i])) {
                cout << -1;
                return 0;
            }
            total *= A[i];
        }
        cout << total << endl;
        if (total > MAX) {
            cout << -1;
            return 0;
        }
    }
    cout << total;
}
// 1000000000000000000
// 999999999999999999

// 100000000000000000 10

// OK 1000000000000000000
// NG 1000000000000000001

// 1000000000000000000
// 2147485794483647