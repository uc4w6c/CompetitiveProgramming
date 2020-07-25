#include <bits/stdc++.h>
using namespace std;

// D - Dice in Line
int main() {
    int N, K;
    cin >> N >> K;

    vector<double> p(N);
    int tmpP;
    for (int i = 0; i < N; i++) {
        cin >> tmpP;
        p[i] = ((tmpP + 1.0) / 2.0);
    }

    double nowSum, maxSum;
    for (int i = 0; i < K - 1; i++) {
        nowSum += p[i];
    }
    maxSum = nowSum;
    for (int i = K - 1; i < N; i++) {
        nowSum = nowSum - p[i - K] + p[i];
        maxSum = max(nowSum, maxSum);
    }
    cout << maxSum;
}
