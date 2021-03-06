#include <bits/stdc++.h>
using namespace std;

// これだとTLEになってしまう。
int N, M;
long long L;

struct ToCost {
    int toPoint;
    long long cost;
};

map<int, vector<ToCost>> pointMap;

int minCost;
bool isArrived;

void calc(int from, int to, int nowCost, long long nowFuel, vector<bool> routed) {
    for (ToCost toCost : pointMap[from]) {
        if (routed[toCost.toPoint]) continue;

        if (toCost.toPoint == to) {
            int tmpCost;
            if (nowFuel < toCost.cost) {
                tmpCost = nowCost + 1;
            } else {
                tmpCost = nowCost;
            }
            if (isArrived) {
                minCost = min(tmpCost, minCost);
            } else {
                minCost = tmpCost;
            }
            isArrived = true;
            continue; // 多分continueであっていると思う
        }

        routed[toCost.toPoint] = true;
        if (nowFuel < toCost.cost) {
            calc(toCost.toPoint, to, nowCost + 1, L - toCost.cost, routed);
        } else {
            calc(toCost.toPoint, to, nowCost, nowFuel - toCost.cost, routed);
        }
        routed[toCost.toPoint] = false;
    }
};

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

    /*
    // debug
    for (int i = 1; i <= N; i++) {
        cout << i << ":" << endl;
        for (ToCost toCost : pointMap[i]) {
            cout << toCost.toPoint << ", " << toCost.cost << endl;
        }
        cout << endl;
    }
    */

    int Q;
    cin >> Q;
    int S, T;
    for (int i = 0; i < Q; i++) {
        cin >> S >> T;
        minCost = 0;
        isArrived = false;
        vector<bool> routed(N + 1, false); 
        routed[S] = true;
        for (ToCost toCost : pointMap[S]) {
            if (toCost.toPoint == T) {
                isArrived = true;
                minCost = 0;
                break;
            }

            routed[toCost.toPoint] = true;
            calc(toCost.toPoint, T, 0, L - toCost.cost, routed);
            routed[toCost.toPoint] = false;
        }

        if (isArrived) {
            cout << minCost << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
