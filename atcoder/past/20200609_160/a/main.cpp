#include <bits/stdc++.h>
using namespace std;

// A - Coffee
int main() {
    string S;
    cin >> S;
    if (S[2] == S[3] && S[4] == S[5]) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
