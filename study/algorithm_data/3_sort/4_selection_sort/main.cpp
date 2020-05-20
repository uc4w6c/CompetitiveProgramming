#include <bits/stdc++.h>
using namespace std;

// Selection Sort : 選択ソート
int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    int changeCount = 0;
    for (int i = 0; i < N; i++) {
        int minj = i;
        for (int j = i; j < N; j++) {
            if (A.at(j) < A.at(minj)) {
                minj = j;
            }
        }
        if (i != minj) {
            changeCount++;
        }
        int tmp = A.at(i);
        A.at(i) = A.at(minj);
        A.at(minj) = tmp;
    }

    for (int i = 0; i < N; i++) {
        cout << A.at(i) << " ";
    }
    cout << endl;
    cout << changeCount << endl;
}
