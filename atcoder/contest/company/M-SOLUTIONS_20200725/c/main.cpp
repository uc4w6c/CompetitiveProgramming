#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N, K;
    cin >> N >> K;

    long long A[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long firstA = A[0];
    for (int i = K; i < N; i++) {
        // cout << firstA << ":" << A[i] << endl;  // debug
        if (firstA < A[i]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        firstA = A[i - K + 1];
    }
}
