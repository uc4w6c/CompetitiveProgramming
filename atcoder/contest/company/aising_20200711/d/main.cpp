#include <bits/stdc++.h>
using namespace std;

// 10->2
string numTobinary(int bina){
    int ans = 0;
    for (int i = 0; bina > 0; i++) {
        ans = ans+(bina%2)*pow(10,i);
        bina = bina/2;
    }
    return to_string(ans);
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

// 割り算
int waru(string binary, int n) {
    int lastPoint = 0;
    int point = 0;
    string mod = "";
    while (point < binary.length()) { 
        // cout << "mod:" << mod << endl;  // debug
        // cout << "merge:" << mod + binary.substr(lastPoint, point - lastPoint + 1) << endl;  // debug
        int binaryNum = binaryToNum(mod + binary.substr(lastPoint, point - lastPoint + 1));
        // cout << "binaryNum:" << binaryNum << endl;  // debug
        if (binaryNum >= n) {
            mod = numTobinary(binaryNum % n);
            lastPoint = point + 1;
        }
        // cout << "lastPoint:" << lastPoint << endl;  // debug
        point++;
    }
    // cout << "binary mod:" << binary.substr(lastPoint, point - lastPoint + 1) << endl;  // debug
    // 余った分を加える
    if (point != lastPoint) {
        mod = mod + binary.substr(lastPoint, point - lastPoint + 1);
    }

    return binaryToNum(mod);
}

int main() {
    int N;
    string X;
    cin >> N;
    cin >> X;
    int trueCount = 0;
    for (int i = 0; i < N; i++) {
        if (X[i] == '1') {
            trueCount++;
        }
    }
    // map<string, int> cacheResult;
    string tmp;
    int tmpCount;
    int waruCount;
    // cout << "X:" << X << endl;  // debug
    for (int i = 0; i < N; i++) {
        tmp = "";
        tmpCount = trueCount;
        waruCount = 0;

        if (i != 0) {
            tmp += X.substr(0, i);
        }
        if (X[i] == '1') {
            tmpCount--;
            tmp += '0';
        } else {
            tmpCount++;
            tmp += '1';
        }
        if (i != N) {
            tmp += X.substr(i + 1, N - i - 1);
        }
        // cout << "tmp:" << tmp << endl;  // debug
        // cout << "tmpCount:" << tmpCount << endl;  // debug

        int result = waru(tmp, tmpCount);
        // cout << "result:" << result << endl;  // debug
        waruCount++;
        // ここは割り切れるまでの計算
        while (result != 0) {
            tmpCount = 0;
            string tmpBinary = numTobinary(result);
            for (int j = 0; j < tmpBinary.length(); j++) {
                if (tmpBinary[j] == '1') {
                    tmpCount++;
                }
            }
            result = result % tmpCount;
            waruCount++;
        }
        cout << waruCount << endl;
    }

}
