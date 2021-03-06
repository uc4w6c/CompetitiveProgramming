#include <bits/stdc++.h>
using namespace std;

struct Way {
    int from;
    int to;
    bool operator<(const Way& right) const {
        return from == right.from ? from < right.from : from < right.from;
    }
};

// 並び替えで頑張ろうとしたパターン
int main() {
    int N, M;
    cin >> N >> M;

    vector<Way> ways(M);
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        if (A < B) {
            ways.at(i).from = A;
            ways.at(i).to = B;
        } else {
            ways.at(i).from = B;
            ways.at(i).to = A;
        }
    }

    // 昇順で並び替え
    sort(ways.begin(), ways.end());

    vector<int> rooms(N);
    int nowPoint = 1;
    for (int i = 0; i < M; i++) {
        // 仮
        if (nowPoint == 1) {
            cout << "No";
            return 0;
        }
        if (ways.at(i).from == nowPoint) {
            rooms.at(ways.at(i).to + 1) = nowPoint;
        }
    }

    cout << alice - bob;
}
