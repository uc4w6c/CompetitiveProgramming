#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if (A >= 10 || B >= 10) {
        cout << "-1";
        return 0;
    }
    cout << A * B;
}
