#include <bits/stdc++.h>
using namespace std;

// 以下はTLEになる
int main() {
    int N;
    long long M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    priority_queue<int> result;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result.push(A[i] + A[j]);
        }
    }

    long long happyPoint = 0;
    for (int i = 0; i < M; i++) {
        happyPoint += result.top();
        result.pop();
    }
    cout << happyPoint;
}
