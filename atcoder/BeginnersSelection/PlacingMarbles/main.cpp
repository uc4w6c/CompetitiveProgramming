#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    vector<string> SI(3);
    // 無駄なロジックだけどC++に慣れるためにあえて入れている
    for (int i = 0; i < 3; i++) {
        SI[i] = S.at(i);
    }
    int trueCount = 0;
    for (int i = 0; i < 3; i++) {
        if (SI[i] == "1") {
            trueCount++;
        }
    }
    cout << trueCount;
}
