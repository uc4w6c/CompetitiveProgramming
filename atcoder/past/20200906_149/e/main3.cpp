#include <bits/stdc++.h>
using namespace std;

// TLE&REになる
int main() {
    int N;
    long long M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    vector<int> result(N * N);

    for (int i = 0; i < N; i++) {
        result.push_back(A[i] * 2);
        for (int j = i + 1; j < N; j++) {
            result.push_back(A[i] + A[j]);
            result.push_back(A[i] + A[j]);
        }
    }

    sort(result.begin(), result.end(), greater<int>());
    long long happyPoint = 0;
    for (int i = 0; i < M; i++) {
        happyPoint += result[i];
    }
    cout << happyPoint;
}
