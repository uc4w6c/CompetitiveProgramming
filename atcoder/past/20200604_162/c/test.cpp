#include <bits/stdc++.h>
using namespace std;

// C - Sum of gcd of Tuples (Easy)
int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main() {
    int a = 12;
    int b = 18;
    cout << gcd(12, 18);
}
