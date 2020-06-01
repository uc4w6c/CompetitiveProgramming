#include <bits/stdc++.h>
using namespace std;

const double PI=3.14159265358979323846;
// 以下エラーになる・・・
// const long long PI = 0x314159265358979323846LL;

int main() {
    int R;
    cin >> R;
    cout << (double)((2 * R) * PI);
    // cout << ((long long)((2 * R) * PI) / pow(10, 20));
}

// 6.28318530717958623200