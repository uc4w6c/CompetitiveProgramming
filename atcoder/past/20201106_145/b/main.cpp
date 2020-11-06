#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N;
    string S;
    cin >> N >> S;
    if (N % 2 == 1) {
        cout << "No";
        return 0;
    }
    if (S.substr(0, N / 2) == S.substr(N / 2, N)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
