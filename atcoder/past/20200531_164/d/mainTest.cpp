#include <bits/stdc++.h>
using namespace std;

// D - Multiple of 2019
void calc(string S) {
    if (stoll(S) < 2019) {
        // cout << 0;
        return;
    }
    int size = S.length();
    long count = 0;
    for (int i = 0; i < size - 3; i++) {
        for (int j = 0; j < size - i - 3; j++) {
            if (stoll(S.substr(i, 4 + j)) < 1000) {
                continue;
            }
            if (stoll(S.substr(i, 4 + j)) % 2019 == 0) {
                // cout << i << " , " << j << endl;
                count++;
            }
        }
    }
    if (count != 0) {
        cout << count;
    }
}


int main() {
    for (long i = 0; i < 200000; i++) {
        // cout << "i:" << i << endl;
        calc(to_string(i));
        // cout << endl;
    }
}
