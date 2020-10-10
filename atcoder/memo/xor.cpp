#include <bits/stdc++.h>
using namespace std;


// 2進数同士のxor
int main() {
    string a, b;
    cin >> a >> b;
    bitset<16> b1(a);
    bitset<16> b2(b);
    cout << (b1 ^ b2);
}
// 1100 0110 = 0000000000001010
