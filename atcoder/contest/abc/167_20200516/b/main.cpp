#include <bits/stdc++.h>
using namespace std;

int main() {
    int K;
    cin >> K;
    string S;
    cin >> S;

    if (S.length() <= K) {
        cout << S;
        return 0;
    }

    cout << S.substr(0, K) << "...";
}
