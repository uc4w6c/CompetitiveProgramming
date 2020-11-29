#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long B[N - 1];
    for (int i = 0; i < N - 1; i++) {
        cin >> B[i];
    }

    long long sum = B[0];
    for (int i = 1; i < N - 1; i++) {
        sum += min(B[i - 1], B[i]);
    }
    sum += B[N - 2];
    cout << sum;
}
