#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    string T = "";
    bool isMath = true;
    for (int i = S.length() - 1; i >= 0; i--) {
        T = S.at(i) + T;
        if ((T == "dream") ||
            (T == "dreamer") ||
            (T == "erase") ||
            (T == "eraser")) {

                T = "";
        }
        if (T.length() > 7) {
            break;
        }
    }
    if (T != "") {
        isMath = false;
    }
    if (isMath) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
