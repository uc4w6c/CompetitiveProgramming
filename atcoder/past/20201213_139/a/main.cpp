#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    int cnt = 0;
    if (S[0] == T[0]) cnt++;
    if (S[1] == T[1]) cnt++;
    if (S[2] == T[2]) cnt++;
    cout << cnt;
}
