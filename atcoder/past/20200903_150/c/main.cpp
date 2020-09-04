#include <bits/stdc++.h>
using namespace std;

// これはsegmentation fault になる
int N;
int routedCount = 0;
int a, b;
vector<int> P;
vector<int> Q;

void calc(vector<bool> passed, vector<int> route, int passedCount) {
    if (passedCount == N) {
        routedCount++;
        bool isA = true, isB = true;
        for (int i = 0; i < N; i++) {
            if (!isA && !isB) return;
            if (route[i] + 1 != P[i]) isA = false;
            if (route[i] + 1 != Q[i]) isB = false;
        }
        if (isA) a = passedCount;
        if (isB) b = passedCount;
        return;
    }

    for (int i = 0; i < N; i++) {
        if (passed[i]) continue;
        passedCount++;
        passed[i] = true;
        route[passedCount] = i + 1;
        calc(passed, route, passedCount + 1);
    }
}

int main() {
    cin >> N;
    int p, q;
    for (int i = 0; i < N; i++) {
        cin >> p;
        P.push_back(p);
    }
    for (int i = 0; i < N; i++) {
        cin >> q;
        Q.push_back(q);
    }

    for (int i = 0; i < N; i++) {
        vector<bool> passed(N, false);
        passed[i] = true;
        vector<int> route(N);
        route[0] = i + 1;
        calc(passed, route, 1);
    }
    cout << abs(a - b);
}
