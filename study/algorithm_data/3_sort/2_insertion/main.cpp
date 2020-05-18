#include <bits/stdc++.h>
using namespace std;

// Insertion Sort : 挿入ソート
int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    for (int i = 1; i < N; i++) {
        // デバッグ用
        for (int k = 0; k < N; k++) cout << A.at(k) << " ";
        cout << endl;

        int v = A.at(i);
        int j = i - 1;
        while (j >= 0 && A.at(j) > v) {
            A.at(j + 1) = A.at(j);
            j--;
        }
        A.at(j + 1) = v;
    }

    for (int i = 0; i < N; i++) {
        cout << A.at(i) << " ";
    }
}
