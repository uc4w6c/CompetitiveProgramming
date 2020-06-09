#include <bits/stdc++.h>
using namespace std;

// B - Golden Coins
int main() {
    long long X;
    cin >> X;
    long long sum = 0;
    long long tmp;
    tmp = (X / 500);
    sum += tmp * 1000;
    tmp = (X % 500) / 5;
    sum += tmp * 5;
    cout << sum;
}
