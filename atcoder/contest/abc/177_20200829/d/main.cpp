#include <bits/stdc++.h>
using namespace std;

// これだとだめ
int main() {
    int N, M;
    cin >> N >> M;
    map<int, set<int>> friendMap;
    int a, b;
    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        friendMap[a].insert(b);
        friendMap[b].insert(a);
        friendMap[a].insert(friendMap[b].begin(), friendMap[b].end());
        friendMap[b].insert(friendMap[a].begin(), friendMap[a].end());
    }

    int maxGroup = 0;
    for (int i = 1; i <= N; i++) {
        // debug
        cout << i << ":" << endl;
        for (auto num : friendMap[i]) {
            cout << num << ",";
        }
        cout << endl;
        maxGroup = max((int)friendMap[i].size() - 1, maxGroup);
    }
    cout << maxGroup;
}
