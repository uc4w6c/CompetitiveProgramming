#include <bits/stdc++.h>
using namespace std;

// 解説確認後回答
int main() {
    double Sx, Sy, Gx, Gy;
    cin >> Sx >> Sy >> Gx >> Gy;
    double ans = (Sx * Gy + Gx * Sy) / (Sy + Gy);
    printf("%.7f", ans);
}
