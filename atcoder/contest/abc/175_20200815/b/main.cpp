#include <bits/stdc++.h>
using namespace std;

// 
int N;
long long L[100];
int countOK = 0;

void calc(int no, int calcCount, int nos[3]) {
    // cout << "lll" << endl; // debug
    if (calcCount == 3) {
        if (L[nos[0]] != L[nos[1]] && L[nos[0]] != L[nos[2]] && L[nos[1]] != L[nos[2]] &&
            L[nos[0]] + L[nos[1]] > L[nos[2]] &&
            L[nos[1]] + L[nos[2]] > L[nos[0]] &&
            L[nos[0]] + L[nos[2]] > L[nos[1]])
        {
            // cout << "OK: " << nos[0] + 1 << ", " << nos[1] + 1 << ", " << nos[2] + 1 << endl; // debug
            countOK++;
        }
        return;
    }
    // cout << calcCount << " count : " << no + 1 << " no" << endl; // debug
    for (int i = no; i < N - (2 - calcCount); i++) {
        // cout << "i:" << i << ", N:" << N - (2 - calcCount) << endl;
        nos[calcCount] = i;
        calc(i + 1, calcCount + 1, nos);
    }
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }


    int nos[3];
    for (int i = 0; i < N - 2; i++) {
        nos[0] = i;
        calc(i + 1, 1, nos);
    }
    cout << countOK;
}
