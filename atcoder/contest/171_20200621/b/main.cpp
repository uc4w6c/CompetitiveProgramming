#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N;i ++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int sum = 0;
    for (int i = 0; i < K; i++) {
        sum += A[i];
    }
    cout << sum;
}
