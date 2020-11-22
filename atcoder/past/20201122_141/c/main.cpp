#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long long K, Q;
    cin >> N >> K >> Q;
    vector<long long> scores(N, K - Q);
    int A;
    for (int i = 0; i < Q; i++) {
        cin >> A;
        scores[A - 1]++;
    }

    for (int i = 0; i < N; i++) {
        if (scores[i] > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
