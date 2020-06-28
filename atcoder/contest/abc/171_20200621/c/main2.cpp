#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    if (N <= 26) {
        cout << char(96 + N);
        return 0;
    }

    long long result = N;
    long long modN = N % 26;
    // cout << char(96 + modN);
    while (result > 26) {
        // result = result / 26;
        if (modN == 0) { 
            cout << char(96 + 26);
        } else {
            cout << char(96 + modN);
        }
        result = result / 26;
        modN = result % 26;
    }
    cout << char(96 + modN);
}

/*
703 / 26:27
703 % 26:1
27 * 26:702

52 / 26:2
52 % 26:0
*/
