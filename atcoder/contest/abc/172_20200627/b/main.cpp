#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    string S, T;
    cin >> S >> T;
    long long countDiff = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] != T[i]) {
            countDiff++;
        }
    }
    cout << countDiff;
}
