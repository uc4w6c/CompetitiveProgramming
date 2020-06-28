#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    /*if (N <= 26) {
        cout << char(96 + N);
        return 0;
    }*/

    long long result = N;
    long long modN = N % 26;
    stack<char> out;
    // cout << char(96 + modN);
    while (result > 26) {
        // result = result / 26;
        if (modN == 0) { 
            out.push(char(96 + 26));
        } else {
            out.push(char(96 + modN));
        }
        result = result / 26;
        modN = result % 26;
    }
    if (modN == 0) { 
        out.push(char(96 + 26));
    } else {
        out.push(char(96 + modN));
    }

    while (!out.empty()) {
        cout << out.top();
        out.pop();
    }
}
// 702
// zz
// が aazになっている
// 702 / 26:27
// 702 % 26:0