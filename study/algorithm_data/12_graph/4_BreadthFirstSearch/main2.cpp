#include <bits/stdc++.h>
using namespace std;

// これはBFSではないかも！
int main() {
    int N;
    cin >> N;

    int U, K, V;
    vector<vector<int>> nodes(N);
    for (int i = 0; i < N; i++) {
        cin >> U >> K;
        vector<int> values(K);
        for (int j = 0; j < K; j++) {
            cin >> V;
            values[j] = V;
        }
        nodes[i] = values;
    }

    queue<int> que;
    int minRoute[N];
    for (int i = 0; i < N; i++) minRoute[i] = 0;
    int findCount = 0;
    int nextNo = 0;  // 次のCountになる数値を指定
    que.push(0);
    while (!que.empty()) {
        int node = que.front();
        que.pop();
        // cout << "loop:" << node << endl; // debug
        if (node == nextNo) {
            nextNo = -1;
            findCount++;
        }
        minRoute[node] = findCount;

        for (int value : nodes[node]) {
            // cout << "value:" << value << endl; //debug
            // cout << "minRoute[value - 1]" << minRoute[value - 1] << endl; // debug
            if (minRoute[value - 1] == 0) {
                que.push(value - 1);
                if (nextNo == -1){ 
                    nextNo = value;
                }
            }
        }
    }


    for (int i = 0; i < N; i++) {
        cout << i + 1 << " " << minRoute[i] << endl;
    }

}
