#include <bits/stdc++.h>
using namespace std;

// B - Postdocs
int main() {
    string T;
    cin >> T;

    int size = T.size();
    for (int i = 0; i < size; i++) {
        if (T[i] == '?') {
            if (i > 0) {
                if (T[i - 1] == 'P') {
                    T[i] = 'D';
                    continue;
                }
            }
            if (i < size && 
                (T[i + 1] == 'D' || T[i + 1] == '?')) {
                T[i] = 'P';
            } else {
                T[i] = 'D';
            }
        }
    }
    cout << T;
}
// q PD?D??P
// a PDPDPDP
// q PD?D???
// a PDPDPDD
// a PDPDDDD

// q ???
// a PDD 3
// a DDD 3

// 前を見る必要がある
// q PP?D
// a PPPD 2
// a PPDD 3
