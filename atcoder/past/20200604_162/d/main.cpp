#include <bits/stdc++.h>
using namespace std;

// 以下だとタイムアウトする
// D - RGB Triplets
int main() {
    int N;
    string S;
    cin >> N >> S;

    if (N < 3) {
        cout << 0;
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if (S[i] == S[j]) break;
                if (S[i] == S[k]) continue;
                if (S[j] == S[k]) continue;

                if ((j - i) != (k - j)) {
                    // cout << "i:" << i << S[i] << ", j:" << j << S[j] << ", k:" << k << S[k] << endl;
                    sum++;
                }
            }
        }
    }
    cout << sum;
}
