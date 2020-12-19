#include <bits/stdc++.h>
using namespace std;

// 以下だとコンテスト後に追加されたケースがWAになってしまう

struct Node  {
    long long point;
    vector<Node*> childNodes;
};

void calc(Node* node, long long parentPoint) {
    // cout << parentPoint << endl; // debug

    node->point += parentPoint;

    for (auto childNode : node->childNodes) {
        calc(childNode, node->point);
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
        nodes[a].childNodes.push_back(&nodes[b]);
    }
    // initial
    for (int i = 0; i < N; i++) {
        nodes[i].point = 0;
    }

    int p, x;
    for (int i = 0; i < Q; i++) {
        cin >> p >> x;
        p--;
        nodes[p].point += x;
    }

    calc(&nodes[0], 0);

    for (int i = 0; i < N; i++) {
        cout << nodes[i].point << " ";
    }
}

/*
上記だと以下の例が通らない
入力
4 3
1 4
1 3
2 3
2 10
1 100
3 1

本来の出力
100 111 101 100
*/