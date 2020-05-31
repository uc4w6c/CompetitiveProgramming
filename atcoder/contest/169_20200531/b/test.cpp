#include <bits/stdc++.h>
using namespace std;
 
// 
int main() {
    int N;
    cin >> N;
    long long total = 0;
    long long MAX = pow(10, 18);
    // cout << MAX << endl;
    for (int i = 0; i < N; i++) {
        long long A;
        cin >> A;
        if (i == 0) {
            total += A;
        } else {
            total *= A;
        }
        /*if (total > MAX) {
            cout << -1;
            return 0;
        }*/
    }
    if (total > MAX) {
        cout << -1;
            return 0;
    }
    cout << total;
}
 
// 1000000000000000000
// 1000000000000000000
