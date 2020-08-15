#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    string S;
    cin >> S;
    if (S == "RRR") {
        cout << 3;
        return 0;
    }
    if (S == "RRS" || S == "SRR") {
        cout << 2;
        return 0;
    }
    if (S[0] == 'R' || S[1] == 'R'|| S[2] == 'R') {
        cout << 1;
        return 0;
    }
    cout << 0;
}
