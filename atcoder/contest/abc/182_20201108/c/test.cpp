#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    // cin >> N;
    // N = pow(10, 18);
    N  = 300;
    vector<bool> three(N, false);
    long long tmp = 3;
    long long cnt = 1;
    while (tmp <= N) {
        three[tmp] = true;
        tmp = 3 * ++cnt;
    }
    
    for (long long i = 3; i < 300; i++) {
        if (three[i]) {
            cout << i << ",";
        }
    }
}
