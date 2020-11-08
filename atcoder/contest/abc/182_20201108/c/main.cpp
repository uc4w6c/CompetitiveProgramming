#include <bits/stdc++.h>
using namespace std;

// 以下だめ
int main() {
    string N;
    cin >> N;
    vector<int> modVec(N.size());
    int sumMod = 0;
    int okMod = 0;
    int oneMod = 0;
    int twoMod = 0;
    for (int i = 0; i < N.size(); i++) {
        modVec[i] = stoi(N.substr(i, 1)) % 3;
        if (modVec[i] % 3 == 0) okMod++;
        if (modVec[i] % 3 == 1) oneMod++;
        if (modVec[i] % 3 == 2) twoMod++;
        sumMod += modVec[i];
    }
    if (sumMod % 3 == 0) {
        cout << "0";
        return 0;
    }
    int returnCount = 0;
    if (sumMod % 3 == 1) {
        if (twoMod >= 1) {
            cout << "1";
            return 0;
        }
        if (oneMod >= 2) {
            cout << "2";
            return 0;
        }
    }
    if (sumMod % 3 == 2) {
        if (oneMod >= 2) {
            cout << "1";
            return 0;
        }
        if (twoMod >= 2) {
            cout << "2";
            return 0;
        }
    }
    if (okMod > 0) {
        cout << N.size() - okMod;
        return 0;
    }

    cout << "-1";
}
