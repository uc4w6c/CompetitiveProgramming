#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    long long N;
    cin >> N;

    int countA = 1, countB = 1;
    long long a = 3, b = 5;
    while (a < N) {
        a = pow(3, countA);
        countB = 1;
        b = 5;
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
