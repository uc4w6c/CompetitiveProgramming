#include <bits/stdc++.h>
using namespace std;

// C - Rally
// 効率化はしていないが、100件くらいならこれでOK
int main() {
    int N;
    cin >> N;
    int X[N];
    int minX, maxX;
    int sumMin = 0;
    for (int i = 0; i < N; i++) {
        cin >> X[i];
        if (i == 0) {
            minX = X[i];
            maxX = X[i];
        }
        minX = min(minX, X[i]);
        maxX = max(maxX, X[i]);
        sumMin += pow(X[i], 2);
    }

    int sum;
    for (int i = minX; i <= maxX; i++) {
        sum = 0;
        for (int j = 0; j < N; j++) {
            if ((i - X[j]) != 0) {
                sum += pow((i - X[j]), 2);
            }
        }
        sumMin = min(sum, sumMin);
    }
    cout << sumMin;
}
