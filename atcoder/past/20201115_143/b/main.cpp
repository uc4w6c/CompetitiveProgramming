#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int d[N];
    for (int i = 0; i < N; i++) {
        cin >> d[i];
    }

    long long sum = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            sum += d[i] * d[j];
        }
    }
    cout << sum;
}
