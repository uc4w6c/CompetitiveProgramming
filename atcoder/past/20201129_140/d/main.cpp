#include <bits/stdc++.h>
using namespace std;

// main2の方で解けることに気づいたため、途中で中断
int main() {
    // 考え方
    // 連続する文字列が多い場所から逆向きに変えたほうが良さそう
    // かつ置き換えしたら常に最新の状態が変わる必要がある。
    // 例: RLLLRRRLRL -> 1回置き換え後 RRRRRRRLRL
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    map<int, vector<pair<int, int>>, greater<int>> countMap;
    char before = S[0];
    int beforePoint = 0;
    for (int i = 1; i < N; i++) {
        if (S[i] != before) {
            countMap[i - beforePoint].push_back(pair(before + 1, i));
            before = S[i];
            beforePoint = i;
        }
    }
}
