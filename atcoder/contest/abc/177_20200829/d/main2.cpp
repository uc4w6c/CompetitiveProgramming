#include <bits/stdc++.h>
using namespace std;

// 
struct Node {
    vecotr<Node*> childNodes;
};
vector<Node> nodes;

int main() {
    int N, M;
    cin >> N >> M;
    Node nodes[N + 1];

    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        nodes[a].childNodes.push_back(b);
        nodes[b].childNodes.push_back(c);
    }

    

    int maxGroup = 0;
    for (int i = 1; i <= N; i++) {
        // debug
        cout << i << ":" << endl;
        for (auto num : friendMap[i]) {
            cout << num << ",";
        }
        cout << endl;
        maxGroup = max((int)friendMap[i].size(), maxGroup);
    }
    cout << maxGroup;
}
