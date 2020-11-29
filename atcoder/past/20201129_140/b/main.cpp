#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N], B, C[N - 1];
    map<int, int> bMap;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B;
        bMap[i + 1] = B;
    }
    for (int i = 0; i < N - 1; i++) {
        cin >> C[i];
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += bMap[A[i]];
        if (i > 0) {
            if (A[i] - 1 == A[i - 1]) {
                sum += C[A[i - 1] - 1];
            }
        }
    }
    cout << sum;
}
