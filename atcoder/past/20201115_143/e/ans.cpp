#include <bits/stdc++.h>
using namespace std;

// ワーシャルフロイド法を使った答え
// 以下間違っている・・・
int SUPPLY_INF = 301;
long long COST_INF = 1e17;

int main() {
    int N, M;
    long long L;
    cin >> N >> M >> L;

    pair<int, long long> G[N + 1][N + 1];
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            if (i == j) {
                G[i][j].first = 0;
                G[i][j].first = 0;
            } else {
                G[i][j].first = SUPPLY_INF;
                G[i][j].second = COST_INF;
            }
        }
    }

    int A, B;
    long long C;
    for (int i = 0; i < M; i++) {
        cin >> A >> B >> C;
        if (C > L) continue; // この時点でLを超えていたら無視
        G[A][B].first = 0;
        G[A][B].second = L - C;
        G[B][A].first = 0;
        G[B][A].second = L - C;
    }

    // ワーシャルフロイド法で最短距離を求める
    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (G[i][k].first == SUPPLY_INF || G[j][k].first == SUPPLY_INF) continue;

                int tmpSupply = G[i][k].first + G[j][k].first;
                long long tmpCost = (L - G[i][k].second) + (L - G[j][k].second);
                if (tmpCost > L) {
                    tmpSupply++;
                    // tmpCost -= L;
                    tmpCost = min(G[i][k].second, G[j][k].second);
                } else {
                    tmpCost = L - tmpCost;
                }

                // debug
                /*
                if (i == 2 && j == 5) {
                    cout << "K:" << k << endl;
                    cout << i << ":" << G[i][k].first << ", " <<  G[i][k].second << endl;
                    cout << j << ":" << G[j][k].first << ", " <<  G[j][k].second << endl;
                    cout << tmpSupply << ", " << tmpCost << endl;
                }
                */

                if (G[i][j].first >= tmpSupply &&
                    (G[i][j].second == COST_INF || G[i][j].second < tmpCost)
                ) {
                    G[i][j].first = tmpSupply;
                    G[i][j].second = tmpCost;
                }
            }
        }
    }

    int Q;
    cin >> Q;
    int S, T;
    for (int i = 0; i < Q; i++) {
        cin >> S >> T;
        if (G[S][T].second == COST_INF) {
            cout << -1 << endl;
        } else {
            cout << G[S][T].first << endl;
        }
    }
}
