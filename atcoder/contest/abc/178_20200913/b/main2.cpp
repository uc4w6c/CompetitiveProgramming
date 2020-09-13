#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long maxNum;
    maxNum = a * c;
    maxNum = max(a * d, maxNum);
    maxNum = max(b * c, maxNum);
    maxNum = max(b * d, maxNum);
    cout << maxNum;
}
