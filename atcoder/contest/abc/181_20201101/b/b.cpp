#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    long long N;
    cin >> N;
    long long sumX = 0;
    long long A, B;
    long long countX;
    for (int i = 0; i < N; i++) {
        cin >> A >> B;
        countX = (B - A);
        sumX += (A * (countX + 1)) + (countX * (countX + 1) / 2);
    }
    cout << sumX;
}
