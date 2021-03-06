#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, N, M;
    cin >> H >> W >> N >> M;
    vector<pair<int, int>> light(N);
    int A, B;
    for (int i = 0; i < N; i++) {
        cin >> A >> B;
        light[i] = make_pair(A, B);
    }

    vector<vector<bool>> block(H + 1, vector<bool>(W + 1, false));
    int C, D;
    for (int i = 0; i < M; i++) {
        cin >> C >> D;
        block[C][D] = true;
    }

    int shineCount = N;
    int tmpH, tmpW;
    vector<vector<bool>> shine(H + 1, vector<bool>(W + 1, false));
    for (int i = 0; i < N; i++) {
        shine[light[i].first][light[i].second] = true; // ライトの箇所は光った扱いになる
        block[light[i].first][light[i].second] = true; // ライトもブロック扱いにして重複しないようにする
        // 左
        tmpH = light[i].first - 1, tmpW = light[i].second;
        while (tmpH >= 1) {
            if (block[tmpH][light[i].second]) break;
            if (!shine[tmpH][light[i].second]) {
                cout << tmpH << "," << light[i].second << endl; // debug
                shine[tmpH][light[i].second] = true;
                shineCount++;
            }
            tmpH--;
        }
        // 右
        tmpH = light[i].first + 1, tmpW = light[i].second;
        while (tmpH <= H) {
            if (block[tmpH][light[i].second]) break;
            if (!shine[tmpH][light[i].second]) {
                cout << tmpH << "," << light[i].second << endl; // debug
                shine[tmpH][light[i].second] = true;
                shineCount++;
            }
            tmpH++;
        }
        // 上
        tmpH = light[i].first, tmpW = light[i].second - 1;
        while (tmpW >= 1) {
            if (block[light[i].first][tmpW]) break;
            if (!shine[light[i].first][tmpW] ) {
                cout << light[i].first << "," << tmpW << endl; // debug
                shine[light[i].first][tmpW] = true;
                shineCount++;
            }
            tmpW--;
        }
        // 下
        tmpH = light[i].first, tmpW = light[i].second + 1;
        while (tmpW <= W) {
            if (block[light[i].first][tmpW]) break;
            if (!shine[light[i].first][tmpW] ) {
                cout << light[i].first << "," << tmpW << endl; // debug
                shine[light[i].first][tmpW] = true;
                shineCount++;
            }
            tmpW++;
        }
    }
    cout << shineCount;

}
