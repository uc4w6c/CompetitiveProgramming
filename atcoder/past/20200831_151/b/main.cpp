#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N, K, M;
    cin >> N >> K >> M;
    int A[N];
    int sum = 0;
    for (int i = 0; i < N - 1; i++) {
        cin >> A[i];
        sum += A[i];
    }
    if (sum + K >= M * N) {
        cout << max((M * N - sum), 0);
    } else {
        cout << -1;
    }
}
