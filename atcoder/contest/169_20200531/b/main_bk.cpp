#include <bits/stdc++.h>
using namespace std;

// 
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
