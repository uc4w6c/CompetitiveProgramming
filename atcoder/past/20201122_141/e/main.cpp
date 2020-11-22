#include <bits/stdc++.h>
using namespace std;

// 一回TLEを考慮せずに実装
// やっぱりTLEになってしまう(WAも3つある・・・)
int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    for (int i = (N / 2); i > 0; i--) {
        // cout << i << endl; // debug
        map<string, bool> existMap;
        for (int j = 0; j <= N - i; j++) {
            if (existMap[S.substr(j, i)]) {
            // cout << j << endl; // debug
            // if (existMap.count(S.substr(j, i))) {
                cout << i;
                return 0;
            }
            existMap[S.substr(j, i)] = true;
        }
    }
    cout << 0;
}
// abcd  -  ab  a b c
// abcdef - abc ab bc cd 
