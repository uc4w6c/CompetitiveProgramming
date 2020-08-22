#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    string N;
    cin >> N;
    int tmp = 0;
    int num;
    for (long long i = 0; i < N.size(); i++) {
        num = stoi(N.substr(i, 1));
        if (tmp + num < 9) {
            tmp = tmp + num;
        } else {
            tmp = (tmp + num) - 9;
        }
        // cout << tmp << endl; // debug
    }
    if (tmp == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
