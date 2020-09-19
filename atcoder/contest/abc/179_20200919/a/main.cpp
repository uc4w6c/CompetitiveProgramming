#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    string S;
    cin >> S;
    if (S[S.size() - 1] == 's') {
        cout << S + "es";
    } else {
        cout << S + "s";
    }
}
