#include <bits/stdc++.h>
using namespace std;

// B - Easy Linear Programming
int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;

    int sum = 0;
    int count = K;
    if (A >= K) {
        cout << K;
        return 0;
    }
    count -= A;
    sum += A;
    if (B >= count) {
        cout << sum;
        return 0;
    }
    count -= B;

    cout << sum - count;
}
