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
    long long now = N;

    now -= from[0];
    if (now <= 0) {
        cout << "No";
        return 0;
    }
    now += to[0] - from[0];
    now = min(now, N);
    for (int i = 1; i < M; i++) {
        now -= from[i] - to[i - 1];
        if (now <= 0) {
            cout << "No";
            return 0;
        }
        // cout << "from:" << now;
        now += to[i] - from[i];
        now = min(now, N);
        // cout << ", to:" << now << endl;
    }
    now -= T - to[M - 1];
    if (now <= 0) {
        cout << "No";
        return 0;
    }
    cout << "Yes";
}
