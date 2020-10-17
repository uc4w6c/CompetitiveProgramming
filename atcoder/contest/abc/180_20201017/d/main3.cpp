#include <bits/stdc++.h>
using namespace std;

// これでもダメ
int main() {
    long long X, Y, A, B;
    cin >> X >> Y >> A >> B;

    long long ex = 0;
    long long strong = X;
    while (true) {
        if (strong * A >= Y) break;

        if ((strong * A) > (strong + B)) {
            break;
        }
        ex++;
        strong *= A;
    }
    cout << ex << endl; // debug
    long long tmp = (Y - strong - 1) / B;
    cout << tmp << endl; // debug
    ex += tmp;
    cout << ex;
}
// 2, 11, 10, 2
// 2, 4, 6, 8, 10= 4


// 1000000000000000000
// 1 1000000000000000000 1000 1