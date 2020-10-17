#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    string S, T;
    cin >> S >> T;
    if (S == "N") {
        cout << T;
    } else {
        if (T == "a") cout << "A";
        else if (T == "b") cout << "B";
        else cout << "C";
    }
}
