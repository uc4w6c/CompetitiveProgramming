#include <bits/stdc++.h>
using namespace std;

int main() {
    // string S = "1234";
    string S;
    cin >> S;
    if (stoll(S) < 2019) {
        cout << 0;
        return 0;
    }
    cout << S;
}
