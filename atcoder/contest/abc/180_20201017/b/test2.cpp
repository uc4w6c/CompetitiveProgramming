#include <bits/stdc++.h>
using namespace std;

double sprt5(double a) {
    double b = a;
    for(int i = 0; i < 10; i++) {
        b = (b * b + a) / (2 * b);
    }
    return b;
}

int main() {
    double tmp = sprt5(2.0);
    cout << tmp << endl;
    printf("%.20f\n", 10, tmp);
    return 0;
}
