#include <bits/stdc++.h>
using namespace std;

// A - Serval vs Monster
int main() {
    int H, A;
    cin >> H >> A;
    if (H % A == 0) {
        cout << floor(H / A);
    } else {
        cout << (H / A) + 1;
    }
}
