#include <bits/stdc++.h>
using namespace std;

// これだと全然ダメ
// めんどくさいからやめた

struct Node  {
    long long no;
    long long point;
    vector<Node*> childNodes;
};

void calc(Node* node, long long parentPoint, vector<bool> routed) {
    // cout << parentPoint << endl; // debug
    node->point += parentPoint;
    routed[node->no] = true;

    for (auto childNode : node->childNodes) {
        if (routed[childNode->no]) continue;
        calc(childNode, node->point, routed);
    }
};

int main() {
    int N, Q;
    cin >> N >> Q;
    Node nodes[N];
    int a, b;
    for (int i = 0; i < N - 1; i++) {
        cin >> a >> b;
        a--; b--;
        if (a > b) {
            int tmp = a;
            a = b;
            b = tmp;
        }
        nodes[a].childNodes.push_back(&nodes[b]);
        nodes[b].childNodes.push_back(&nodes[a]);
    }
    // initial
    for (int i = 0; i < N; i++) {
        nodes[i].no = i;
        nodes[i].point = 0;
    }

    int p, x;
    for (int i = 0; i < Q; i++) {
        cin >> p >> x;
        p--;
        nodes[p].point += x;
    }

    vector<bool> routed(N, false);
    calc(&nodes[0], 0, routed);

    for (int i = 0; i < N; i++) {
        cout << nodes[i].point << " ";
    }
}
