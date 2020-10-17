#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X, Y, A, B;
    cin >> X >> Y >> A >> B;

    long long ex = 0;
    long long strong = X;
    long long check;
    while (true)    {
        if (strong * A >= 2e9) break; // 桁あふれチェック これだとだめ
        if (strong * A >= Y) break;

        if ((strong * A) >= (strong + B)) {
            break;
        }
        ex++;
        strong *= A;
    }
    long long tmp = (Y - strong - 1) / B;
    ex += tmp;
    cout << ex;
}
