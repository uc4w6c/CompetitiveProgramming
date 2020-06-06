#include <bits/stdc++.h>
using namespace std;

// B - Popular Vote
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);

    int total = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        total += A[i];
    }

    int count = 0;
    int min = total / (4.0 * M);
    cout << min;
    for (int i = 0; i < N; i++) {
        if (A[i] >= min) {
            count++;
            if (count >= M) {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
}
