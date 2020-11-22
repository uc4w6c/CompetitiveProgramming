#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    string S;
    cin >> N >> X >> S;

    for (int i = 0; i < N; i++) {
        if (S[i] == 'o') {
            X++;
        } else {
            X = max(--X, 0);
        }
    }
    cout << X;
}
