#include <bits/stdc++.h>
using namespace std;

// D - Floor Function
int main() {
    long long A, B, N;
    cin >> A >> B >> N;

    long long x = B - 1;
    x = min(x, N);
    long long result = floor(A * x / B) - A * floor(x / B);
    cout << result;
}
