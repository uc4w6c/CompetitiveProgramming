#include <bits/stdc++.h>
using namespace std;

// A - Blackjack
int main() {
    int A1, A2, A3;
    cin >> A1 >> A2 >> A3;
    if (A1 + A2 + A3 >= 22) cout << "bust";
    else cout << "win";
}
