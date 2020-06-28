#include <bits/stdc++.h>
using namespace std;

// 貪欲法
// この方法は完全ではないが一旦実装
int D;
int C[26];
int last[26];

int main() {
    cin >> D;
    for (int i = 0; i < 26; i++) {
        cin >> C[i];
        last[i] = 0;
    }

    // vector<vector<int>> S[][];
    int S[D][26];
    for (int i = 0; i < D; i++) {
        for (int j = 0; j < 26; j++) {
            cin >> S[i][j];
        }
    }

    long long sSum = 0;
    // それぞれの日の増加量を計算
    for (int i = 0; i < D; i++) {
        int maxAddS = 0;  // それぞれの日の満足度
        int nowSPoint = 0;  // 最大の値の場所を保存
        // 全種類の最大増加量を選択する
        for (int j = 0; j < 26; j++) {
            int nowSAdd = S[i][j];
            // 自分以外のマイナス量を確認
            for (int k = 0; k < 26; k++) {
                if (j == k) continue;
                if (last[k] == 0) continue;
                nowSAdd -= C[k] * (i - last[k]);
            }
            // maxAddS = max(nowSAdd, maxAddS);
            if (j == 0) {
                maxAddS = nowSAdd;
                nowSPoint == 0;
            } else {
                if (nowSAdd > maxAddS) {
                    maxAddS = nowSAdd;
                    nowSPoint = j;
                }
            }
        }
        cout << nowSPoint + 1 << endl;
        sSum += (long long)maxAddS;
    }
    // sSumを出力?
}
