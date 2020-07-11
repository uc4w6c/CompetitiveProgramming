#include <bits/stdc++.h>
using namespace std;

// 10->2
int binary(int bina){
    int ans = 0;
    for (int i = 0; bina > 0; i++) {
        ans = ans+(bina%2)*pow(10,i);
        bina = bina/2;
    }
    return ans;
}

// 2進数から10進数
int binaryToNum(string binary){
    int i=0, n=0;
    while (true) {
        if ( binary[i]=='1' ) n=n+1;
        i=i+1;
        if ( binary[i]=='\0' ) break;
        n=n*2;
    }
    return n;
}

int main() {
    cout << binary(8) << endl;
    cout << binaryToNum("1111") << endl;
    cout << binaryToNum("01") << endl;
}
