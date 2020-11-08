#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.rbegin(), A.rend());
    // cout << A[0] << endl; // debug

    map<int, int> countMap;
    int maxGCD = A[0];
    for (int i = 2; i <= A[0]; i++) {
        for (int j = 0; j < N; j++) {
            if (A[j] >= i && A[j] % i == 0) {
                countMap[i]++;
            }
         }
        if (countMap[i] > countMap[maxGCD]) {
            maxGCD = i;
        }
    }
    // cout << countMap[maxGCD] << endl; // debug
    // for (int i = 0; i <= A[0]; i++) {
    //     cout << i << " : " << countMap[i] << endl; // debug
    // }
    cout << maxGCD;
}
