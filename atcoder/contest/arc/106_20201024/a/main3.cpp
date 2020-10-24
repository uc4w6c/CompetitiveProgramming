#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    long long N;
    cin >> N;

    int countA = 0, countB = 0;
    long long a = 0, b = 0;
    while (a < N) {
        a = pow(3, countA);
        countB = 0;
        b = 0;
        while (b < N) {
            b = pow(5, countB);
            // cout << a + b << endl; // debug
            if (a + b > N) {
                break;
            }
            if (a + b == N) {
                cout << countA << " " << countB;
                return 0;
            }
            countB++;
        }
        countA++;
    }
    cout << "-1";
}
