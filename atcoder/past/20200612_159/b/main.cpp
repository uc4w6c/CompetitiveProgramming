#include <bits/stdc++.h>
using namespace std;

// B - String Palindrome
bool reverCheck(string S) {
    string reverseS = S;
    reverse(reverseS.begin(), reverseS.end());

    return S == reverseS;
}

int main() {
    string S;
    cin >> S;

    if (!reverCheck(S)) {
        cout << "No";
        return 0;
    }

    int len = (S.size() - 1) / 2;
    if (!reverCheck(S.substr(0, len))) {
        cout << "No";
        return 0;
    }

    int point = (S.size() + 3) / 2;
    if (!reverCheck(S.substr(point - 1, S.size() - point + 1))) {
        cout << "No";
        return 0;
    }

    cout << "Yes";
}
