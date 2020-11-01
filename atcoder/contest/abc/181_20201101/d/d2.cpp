#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    string S;
    cin >> S;
    int sLenght = S.length();
    map<int, int> numMap;
    for (int i = 0; i < sLenght; i++) {
        numMap[stoi(S.substr(i, 1))]++;
    }

    int tmp = 8;
    while (to_string(tmp).length() <= S.length()) {
        map<int, int> tmpMap = numMap;
        if (to_string(tmp).length() == S.length()) {
            for (int i = 0; i < sLenght; i++) {
                if (tmpMap[stoi(to_string(tmp).substr(i, 1))] == 0) break;
                tmpMap[stoi(to_string(tmp).substr(i, 1))]--;
            }
            bool allOk = true;
            for(auto x : tmpMap) {
                if (x.second != 0) {
                    allOk = false;
                    break;
                }
            }
            if (allOk) {
                // cout << tmp << endl; // debug
                cout << "Yes";
                return 0;
            }
        }
        tmp += 8;
    }
    cout << "No";
}
