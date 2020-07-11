#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int L, R, d;
    cin >> L >> R >> d;
    int countD = 0;
    int i = 1;
    while (d * i <= R) {
        if (L <= d * i && d * i <= R) {
            countD++;
        }
        i++;
    }
    cout << countD;
}
