#include <bits/stdc++.h>
using namespace std;

// これでいける気がする!
int main() {
    int N, M;
    cin >> N >> M;
    map<int, int> groupMap;
    map<int, int> groupCount;
    int a, b;
    int groupNo = 0;
    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        if (groupMap.find(a) != groupMap.end() && groupMap.find(b) != groupMap.end()) {
            continue;
        }
        if (groupMap.find(a) != groupMap.end()) {
            groupMap[b] = groupMap[a];
            groupCount[groupMap[a]]++;
            continue;
        }
        if (groupMap.find(b) != groupMap.end()) {
            groupMap[a] = groupMap[b];
            groupCount[groupMap[b]]++;
            continue;
        }
        groupNo++;
        groupMap[a] = groupNo;
        groupMap[b] = groupNo;
        groupCount[groupNo] = 2;
    }

    // debug
    for (int i = 1; i <= N; i++) {
        cout << i << " : " << groupMap[i] << endl;
    }

    int maxGroup = 0;
    for (int i = 1; i <= groupNo; i++) {
        // cout << i << " : " << groupCount[i] << endl;
        maxGroup = max(groupCount[i], maxGroup);
    }

    cout << maxGroup;
}
