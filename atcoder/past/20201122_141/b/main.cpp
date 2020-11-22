#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    for (int i = 0; i < S.size(); i++) {
        if (i % 2 == 0) {
            if (S.substr(i, 1) == "L") {
                cout << "No";
                return 0;
            }
        } else {
            if (S.substr(i, 1) == "R") {
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
}
