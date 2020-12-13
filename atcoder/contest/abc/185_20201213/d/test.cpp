#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long> N(3);

    N[0] = 3;
    N[1] = 4;
    N[2] = 2;

    sort(N.begin(), N.end());
    for (int i = 0; i < 3; i++) {
        cout << N[i] << endl;
    }
}
