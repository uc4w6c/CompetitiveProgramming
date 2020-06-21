#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    /*if (N <= 26) {
        cout << char(96 + N);
        return 0;
    }*/

    long long result = N;
    long long modN;
    stack<char> out;
    while (result > 26) {
        // result = result / 26;
        modN = result % 26;
        if (modN == 0) { 
            out.push(char(96 + 26));
        } else {
            out.push(char(96 + modN));
        }
        result = result / 26;
    }
    /*
    if (modN == 0) { 
        out.push(char(96 + 26));
    } else {
        out.push(char(96 + modN));
    }
    */
   // cout << "result:" << result << endl;
    if (result <= 26) {
        modN = result % 26;
        if (modN == 0) { 
            out.push(char(96 + 26));
        } else {
            out.push(char(96 + modN));
        }
    } else {
        result = result / 26;
        out.push(char(96 + result + 1));
    }
    while (!out.empty()) {
        cout << out.top();
        out.pop();
    }
}
// 702
// zz
// が aazになっている
