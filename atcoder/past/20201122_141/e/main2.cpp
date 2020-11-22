#include <bits/stdc++.h>
using namespace std;

// 以下もTLE
int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int maxLen = N / 2;
    map<string, bool> existMap;
    int maxNum = 0;
    for (int i = 0; i < N; i++) {
        // cout << i << endl; // debug
        for (int j = 1; j <= maxLen; j++) {
            if (i - j + 1 < 0) break;
            if (existMap[S.substr(i - j + 1, j)]) {
                // cout << S.substr(i - j + 1, j) << ":" << i << "," << j << endl; // debug
                maxNum = max(j, maxNum);
            } else {
                existMap[S.substr(i - j + 1, j)] = true;
            }
        }
    }
    cout << maxNum;
}
