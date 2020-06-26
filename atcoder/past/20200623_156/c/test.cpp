#include <bits/stdc++.h>
using namespace std;

// C - Rally
int main() {
    int N;
    cin >> N;
    int X[N];
    int minX, maxX;
    for (int i = 0; i < N; i++) {
        cin >> X[i];
        if (i == 0) {
            minX = X[i];
            maxX = X[i];
        }
        minX = min(minX, X[i]);
        maxX = max(maxX, X[i]);
    }
    // cout << minX << endl;  // debug
    // cout << maxX << endl;  // debug
    int sum;
    for (int i = minX; i <= maxX; i++) {
        sum = 0;
        for (int j = 0; j < N; j++) {
            sum += abs(i - X[j]);
        }
        cout << i << " : " << sum << endl;
    }
}
