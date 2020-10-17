#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X, Y, A, B;
    cin >> X >> Y >> A >> B;

    long long ex = 0;
    long long strong = X;
    while (true) {
        if (strong >= Y) break;

        if ((strong * A) > (strong + B)) {
            break;
        }
        ex++;
        strong *= A;
    }
    ex += floor((Y - strong - 1) / B);
    cout << ex;
}
