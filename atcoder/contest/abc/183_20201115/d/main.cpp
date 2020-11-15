#include <bits/stdc++.h>
using namespace std;

// DPを使う


int main() {
    int N;
    long long W;
    cin >> N >> W;

    vector<vector<int>> startIds(pow(10, 5) * 2);
    vector<vector<int>> endIds(pow(10, 5) * 2);
    vector<long long> pList(N);
    int S, T;
    int startS = - 1, endT = 0;
    for (int i = 0; i < N; i++) {
        cin >> S >> T;
        startIds[S].push_back(i);
        endIds[T].push_back(i);
        cin >> pList[i];

        if (startS < 0) {
            startS = S;
        } else {
            startS = min(S, startS);
        }
        endT = max(T, endT);
    }

    long long dp = 0;
    for (int i = startS; i <= endT; i++) {
        if (startIds[i].size() > 0) {
            for (int id : startIds[i]) {
                dp += pList[id];
            }
        }
        if (endIds[i].size() > 0) {
            for (int id : endIds[i]) {
                dp -= pList[id];
            }
        }
        // cout << i << " : " << dp << endl; // debug
        if (dp > W) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}
