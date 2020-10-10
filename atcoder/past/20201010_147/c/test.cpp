#include <bits/stdc++.h>
using namespace std;

// C - HonestOrUnkind2 
int main() {
    int a;
    cin >> a;
    bitset<8> b(a); // 10進数 to 2進数
    cout << b << endl;
    int c = stoi(b.to_string(), 0, 2); // 2進数 to 10進数
    cout << c << endl;
}
