#include <bits/stdc++.h>
using namespace std;

// B - Battle
int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int tern = 0;
    while(true) {
        if (A <= 0) {
            cout << "No";
            return 0;
        }
        if (C <= 0) {
            cout << "Yes";
            return 0;
        }
        if (tern % 2 == 0) {
            C -= B;
        } else {
            A -= D;
        }
        tern++;
    }
}
