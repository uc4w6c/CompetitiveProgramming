#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    string S, T;
    cin >> S >> T;

    int maxMat = 0;
    for (int i = 0; i <= S.size() - T.size(); i++) {
        int match = 0;
        for (int j = 0; j < T.size(); j++) {
            if (S[i + j] == T[j]) {
                match++;
            }
        }
        maxMat = max(match, maxMat);
    }
    cout << T.size() - maxMat;
}
