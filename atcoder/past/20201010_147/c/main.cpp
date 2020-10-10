#include <bits/stdc++.h>
using namespace std;

// C - HonestOrUnkind2
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
    
}
