#include <bits/stdc++.h>
using namespace std;

// 最初から全部の答えを算出するパターン
// これもTLEになった・・・
int N, M;
long long L;

struct ToCost {
    int toPoint;
    long long cost;
};

map<int, vector<ToCost>> pointMap;
int ans[301][301];

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

    for (int i = 1; i <= N - 1; i++) {
        for (int j = i + 1; j <= N; j++) {
            minCost = 0;
            isArrived = false;
            vector<bool> routed(N + 1, false); 
            routed[i] = true;
            for (ToCost toCost : pointMap[i]) {
                if (toCost.toPoint == j) {
                    isArrived = true;
                    minCost = 0;
                    break;
                }

                routed[toCost.toPoint] = true;
                calc(toCost.toPoint, j, 0, L - toCost.cost, routed);
                routed[toCost.toPoint] = false;
            }

            if (isArrived) {
                ans[i][j] = minCost;
                ans[j][i] = minCost;
            } else {
                ans[i][j] = -1;
                ans[j][i] = -1;
            }
        }
    }

    int Q;
    cin >> Q;
    int S, T;
    for (int i = 0; i < Q; i++) {
        cin >> S >> T;
        cout << ans[S][T] << endl;
    }
}
