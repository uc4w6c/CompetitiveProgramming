#include <bits/stdc++.h>
using namespace std;

struct Node  {
    long long point;
    vector<Node*> childNodes;
};

long long calc(Node* node, long long parentPoint) {
    cout << parentPoint << endl; // debug

    long long point = 0;
    point += node->point;
    for (auto childNode : node->childNodes) {
        point += childNode->point + calc(childNode, parentPoint + node->point);
    }
    return point;
};

int main() {
    int N, Q;
    cin >> N >> Q;
    Node nodes[N];
    int a, b;
    for (int i = 0; i < N - 1; i++) {
        cin >> a >> b;
        a--; b--;
        nodes[a].childNodes.push_back(&nodes[b]);
    }
    for (int i = 0; i < N; i++) {
        nodes[i].point = 0;
    }

    int p, x;
    for (int i = 0; i < Q; i++) {
        cin >> p >> x;
        p--;
        nodes[p].point += x;
    }

    // debug
    for (int i = 0; i < N; i++) {
        cout << nodes[i].point << endl;
    }

    long long point = calc(&nodes[0], 0);
    cout << point;
}
