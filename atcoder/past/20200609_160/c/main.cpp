#include <bits/stdc++.h>
using namespace std;

// C - Traveling Salesman around Lake
// ちょっと汚いけどいいか
int main() {
    int K, N;
    cin >> K >> N;
    int A[N + 1];
    int maxA = 0;
    long long sum =0;
    int before = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        maxA = max((A[i] - before), maxA);
        sum += A[i] - before;
        before = A[i];
    }
    A[N] = K;
    maxA = max((A[N] - before + A[0]), maxA);
    sum += A[N] - before;
        
    cout << sum - maxA;

}
