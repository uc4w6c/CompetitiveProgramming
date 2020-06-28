#include <bits/stdc++.h>
using namespace std;

// シンプルに変更する
int main() {
    int X, N;
    cin >> X >> N;

    if (N == 0) {
        cout << X;
        return 0;
    }

    vector<int> p(N);
    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    int index = -1;
    for (int i = 0; i < N; i++) {
        if (p[i] == X) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << X;
        return 0;
    }

    // 念のため101
    for (int i = 1; i <= 101; i++) {
        if (index - i < 0) {
            cout << X - i;
            return 0;
        }
        if (X - i != p[index - i]) {
            cout << X - i;
            return 0;
        }
        if (index + i >= N) {
            cout << X + i;
            return 0;
        }
        if (X + i != p[index + i]) {
            cout << X + i;
            return 0;
        }
    }
}
