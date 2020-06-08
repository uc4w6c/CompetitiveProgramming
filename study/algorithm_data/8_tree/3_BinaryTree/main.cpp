#include <bits/stdc++.h>
using namespace std;

#define MAX 25
#define NIL -1

// Binary Tree
struct Node {
    int parent;
    int left;
    int right;
};

Node nodes[MAX];
int n;

int main() {
    cin >> n;
    nodes[0].left = 0;
    nodes[0].parent = nodes[0].right = NIL;
    for (int i = 0; i < n; i++) {
        int nodeI;
        cin >> nodeI;
        for (int j = 0; j < 2; j++) {
            int childI;
            cin >> childI;
            if (j == 0) {
                nodes[nodeI].left = childI;
            } else {
                nodes[nodeI].right = childI;
            }
            nodes[childI].parent = nodeI;
        }
    }
    // debug
    /*
    for (int i = 0; i < n; i++) {
        cout << "i:" << i;
        cout << ", parent:" << nodes[i].parent;
        cout << ", left:" << nodes[i].left;
        cout << ", right:" << nodes[i].right;
        cout << endl;
    }
    */

    // 最下位層の数値を求める
    queue<Node> que;
    que.push(nodes[0]);
    int nowFloor = 0;
    int maxFloor = 0;
    while (!que.empty()) {
        Node node = que.front();
        que.pop();
        maxFloor = max(nowFloor, maxFloor);
        if (node.left != -1) {
            nowFloor++;
            que.push(nodes[node.left]);
            que.push(nodes[node.right]);
        } else {
            nowFloor--;
        }
    }

    // MEMO: heightが違う
    for (int i = 0; i < n; i++) {
        cout << "node " << i << ": ";
        int parent = nodes[i].parent;
        cout << "parent = " << parent << ", ";
        cout << "sibling = ";
        if (i == 0) {
            cout << "-1";
        } else {
            if (i == nodes[parent].left) {
                cout << nodes[parent].right;
            } else {
                cout << nodes[parent].left;
            }
        }
        cout << ", ";
        cout << "degree = ";
        if (nodes[i].left != -1) {
            cout << "2";
        } else {
            cout << "0";
        }
        cout << ", ";
        cout << "depth = ";
        int parentNode = nodes[i].parent;
        int parentCount = 0;
        for (int j = 0; parentNode != -1; j++) {
            parentCount++;
            parentNode = nodes[parentNode].parent;
        }
        cout << parentCount << ", ";

        cout << "height = " << maxFloor - parentCount << ", ";
        if (i == 0) {
            cout << "root";
        } else {
            if (nodes[i].left != -1) {
                cout << "internal node";
            } else {
                cout << "leaf";
            }
        }
        cout << endl;
    }
}
