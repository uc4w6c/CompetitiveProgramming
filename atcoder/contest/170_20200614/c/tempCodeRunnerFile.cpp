#include <bits/stdc++.h>
using namespace std;

// 
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

    auto itr = find(p.begin(), p.end(), X);
    size_t index = distance(p.begin(), itr);
    if (index == p.size()) {
        cout << X;
        return 0;
    }

    for (int i = 1; i < 100; i++) {
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

    /*for (int i = 0; i < N; i++) {
        cout << p[i] << endl;
    }*/
}
