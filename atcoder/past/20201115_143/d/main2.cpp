#include <bits/stdc++.h>
using namespace std;

// TLEになってしまう
int main() {
    int N;
    cin >> N;
    vector<int> L(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }
    sort(L.rbegin(), L.rend());

    int cnt = 0;
    int abSum;
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            abSum = L[i] + L[j];
            for (int k = j + 1; k < N; k++) {
                if (L[k] >= abSum) break;

                if (L[i] < L[j] + L[k] &&
                    L[j] < L[k] + L[i])
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}
