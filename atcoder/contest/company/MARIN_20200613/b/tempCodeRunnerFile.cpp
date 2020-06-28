#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    long long A, B, V, W, T;
    cin >> A >> V >> B >> W >> T;

    long long currentDiff = abs(A - B);
    long long runDiff = (V - W);
    // cout << runDiff * T << endl;
    // if ((A + (V * T)) >= (B + (W * T))) {
    if (currentDiff <= (runDiff* T)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
