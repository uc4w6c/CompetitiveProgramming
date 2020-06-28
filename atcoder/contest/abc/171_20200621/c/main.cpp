#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    long long countN = (N / 26);
    long long modN = N % 26;

    for (long long i = 0; i < countN; i++) {
        cout << 'a';
    }
    if (modN != 0) cout << char(96 + modN);
}
// 1000000000000001