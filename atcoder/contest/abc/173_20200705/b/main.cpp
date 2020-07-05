#include <bits/stdc++.h>
using namespace std;

// 
int main() {
    int N;
    cin >> N;
    map<string, int> caseMap;
    caseMap["AC"] = 0;
    caseMap["WA"] = 0;
    caseMap["TLE"] = 0;
    caseMap["RE"] = 0;

    string caseS;
    for (int i = 0; i < N; i++) {
        cin >> caseS;
        caseMap[caseS]++;
    }

    cout << "AC x " << caseMap["AC"] << endl;
    cout << "WA x " << caseMap["WA"] << endl;
    cout << "TLE x " << caseMap["TLE"] << endl;
    cout << "RE x " << caseMap["RE"] << endl;
}
