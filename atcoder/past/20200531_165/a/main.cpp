#include <bits/stdc++.h>
using namespace std;

// A - We Love Golf
int main() {
    int K, A, B;
    cin >> K >> A >> B;

    int min = (A + K - 1) / K;
    int result = K * min;
    if (A <= result && result <= B) {
        cout << "OK";
    } else {
        cout << "NG";
    }

}
