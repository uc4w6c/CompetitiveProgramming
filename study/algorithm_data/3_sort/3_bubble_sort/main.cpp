#include <bits/stdc++.h>
using namespace std;

// Bubble Sort : バブルソート
int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    bool isContinue = true;
    int changeCount = 0;
    while (isContinue) {
        isContinue = false;
        for (int j = N - 1; j > 0; j--) {
            if (A.at(j) < A.at(j - 1)) {
                int tmp = A.at(j);
                A.at(j) = A.at(j - 1);
                A.at(j - 1) = tmp;
                changeCount++;
                isContinue = true;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << A.at(i) << " ";
    }
    cout << endl;
    cout << changeCount << endl;
}
