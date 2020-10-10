#include <bits/stdc++.h>
using namespace std;

// C - HonestOrUnkind2 
// 2進数　to 10進数
int binaryToDecimal(string binaryNumber) {
    return stoi(binaryNumber, 0, 2);
};

int main() {
    string a;
    cin >> a;
    cout << binaryToDecimal(a);
}
