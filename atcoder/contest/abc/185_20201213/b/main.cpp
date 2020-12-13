#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, T;
    int M;
    cin >> N >> M >> T;
    long long  from[M], to[M];
    for (int i = 0; i < M; i++) {
        cin >> from[i] >> to[i];
    }

    N -= from[0];
    if (N <= 0) {
        cout << "No";
        return 0;
    }
    N+= to[0] - from[0];
    for (int i = 1; i < M; i++) {
        N -= from[i] - to[i - 1];
        if (N <= 0) {
            cout << "No";
            return 0;
        }
        cout << "from:" << N;
        N+= to[i] - from[i];
        cout << ", to:" << N << endl;
    }
    N -= T - to[M - 1];
    if (N <= 0) {
        cout << "No";
        return 0;
    }
    cout << "Yes";
}
