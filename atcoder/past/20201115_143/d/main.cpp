#include <bits/stdc++.h>
using namespace std;

// TLEになってしまう
int main() {
    int N;
    cin >> N;
    int L[N];
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }

    int cnt = 0;
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if (L[i] < L[j] + L[k] &&
                    L[j] < L[k] + L[i] &&
                    L[k] < L[i] + L[j])
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}
