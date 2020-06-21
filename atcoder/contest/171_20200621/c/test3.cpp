#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "27 / 26:" << (int)(27 / 26) << endl;
    cout << "54 / 26:" << (int)(54 / 26) << endl;
    cout << "703 / 26:" << (int)(703 / 26) << endl;

    // long long result = 703 / 26;
    long long result = 1000000000000001 / 26;
    long long countW = 1;
    while (result > 26) {
        result = result / 26;
        countW++;
    }
    cout << result << endl;
    cout << countW << endl;

    // cout << 1000000000000001 / 26 << endl;
    long long powA = pow(26, 11);
    cout << powA;
}
// 38461538461538

// 1000000000000001
// 141167095653376