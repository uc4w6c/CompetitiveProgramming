#include <bits/stdc++.h>
using namespace std;

// D - Multiple of 2019
// これだとだめ。というか問題文の解釈を間違っている・・・
int main() {
    string S;
    cin >> S;
    if (stoll(S) < 2019) {
        cout << 0;
        return 0;
    }
    int size = S.length();
    long count = 0;
    for (int i = 0; i < size - 3; i++) {
        for (int j = 0; j < size - i - 3; j++) {
            cout << S.substr(i, 4 + j) << endl;
            if (stoll(S.substr(i, 4 + j)) < 1000) {
                continue;
            }
            if (stoll(S.substr(i, 4 + j)) % 2019 == 0) {
                // cout << i << " , " << j << endl;
                count++;
            }
        }
    }
    cout << count;
}
