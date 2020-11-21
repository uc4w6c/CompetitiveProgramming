#include <bits/stdc++.h>
using namespace std;

int N, M;
long long L;

struct ToCost {
    int toPoint;
    long long cost;
};

map<int, vector<ToCost>> pointMap;

int main() {
    cin >> N >> M >> L;

    int A, B;
    long long C;
    for (int i = 0; i < M; i++) {
        cin >> A >> B >> C;
        if (C > L) continue; // この時点でLを超えていたら無視
        pointMap[A].push_back(ToCost { B, C });
        pointMap[B].push_back(ToCost { A, C });
    }

    for (int i = 1; i <= N; i++) {
        cout << i << ":" << endl;
        for (ToCost toCost : pointMap[i]) {
            cout << toCost.toPoint << ", " << toCost.cost << endl;
        }
        cout << endl;
    }
}
