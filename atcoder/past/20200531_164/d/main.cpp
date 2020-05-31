#include <bits/stdc++.h>
using namespace std;

// D - Multiple of 2019
int main() {
    string S;
    cin >> S;
    if (stoll(S) < 2019) {
        cout << 0;
        return 0;
    }
    int size = S.length();
    int count = 0;
    for (int i = 0; i < size - 4; i++) {
        for (int j = 0; j < size - i - 4; j++) {
            if (stoll(S.substr(i, 4 + j)) % 2019 == 0) {
                count++;
            }
        }
    }
    cout << count;
}
