#include <bits/stdc++.h>
using namespace std;


// 2進数の桁数と10進数
// 16桁の場合 - 65535
// 24桁の場合 - 6777215

// 10進数 to 2進数
string decimalToBinary(int decimalNumber) {
    bitset<16> binaryNumber(decimalNumber);
    return binaryNumber.to_string();
};

// 2進数　to 10進数
int binaryToDecimal(string binaryNumber) {
    return stoi(binaryNumber, 0, 2);
};

int main() {
    int a;
    cin >> a;
    string b = decimalToBinary(a);
    cout << b << endl;
    int c = binaryToDecimal(b);
    cout << c << endl;
}
