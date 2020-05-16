#include <bits/stdc++.h>
using namespace std;

// Registration
int main() {
    string S;
    cin >> S;

    string T;
    cin >> T;

    if (S.length() + 1 != T.length()) {
        cout << "No";
        return 0;
    }
    if (S.substr(0, S.length()) == T.substr(0, T.length() - 1)) {
        cout << "Yes";
        return 0;
    }
    cout << "No";

}
