#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    string S;
    cin >> S;
    int sLenght = S.length();
    vector<string> eightList;
    int tmp = 8;
    while (to_string(tmp).length() <= S.length()) {
        if (to_string(tmp).length() == S.length()) {
            eightList.push_back(to_string(tmp));
        }
        tmp += 8;
    }

    // for(string x : eightList) {
    //    cout << x << endl;
    // }

    for(string x : eightList) {
        // cout << "x0:" << x[0] << endl;
        vector<bool> match(sLenght, false);
        for (int i = 0; i < sLenght; i++) {
            bool isOk = false;
            for (int j = 0; j < sLenght; j++) {
                if (!match[j] && x[i] == S[j]) {
                    // cout << x << " : " << i << " " << x[i] << ":" << S[j] << endl; // debug
                    match[j] = true;
                    isOk = true;
                    break;
                }
            }
            if (!isOk) break;
        }
        bool allOk = true;
        for (int i = 0; i < sLenght; i++) {
            if (!match[i]) {
                allOk = false;
                break;
            }
        }
        if (allOk) {
            // cout << x; // debug
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}
