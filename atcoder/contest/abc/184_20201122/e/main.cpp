#include <bits/stdc++.h>
using namespace std;

// 以下全然だめだった・・・
struct Node {
    int h;
    int w;
    string a;
    Node *up;
    Node *right;
    Node *left;
    Node *down;
};

int H, W;
Node nodes[2000][2000];
Node nil;
map<string, pair<Node*, Node*>> teleMap;

Node* startNode;
Node* endNode;
int minCnt = 0;

void calc(Node* nowNode, int nowCnt, vector<vector<bool>>  routed) {
    if (nowNode == endNode) {
        minCnt = min(nowCnt, minCnt);
    }

    if (!routed[nowNode->up->h][nowNode->up->w]) {
        routed[nowNode->up->h][nowNode->up->w] = true;
        calc(nowNode->up, 1, routed);
        routed[nowNode->up->h][nowNode->up->w] = false;
    }

    routed[nowNode->left->h][nowNode->left->w] = true;
    calc(nowNode->left, 1, routed);
    routed[nowNode->left->h][nowNode->left->w] = false;

    routed[nowNode->right->h][nowNode->right->w] = true;
    calc(nowNode->right, 1, routed);
    routed[nowNode->right->h][nowNode->right->w] = false;

    routed[nowNode->down->h][nowNode->down->w] = true;
    calc(nowNode->down, 1, routed);
    routed[nowNode->down->h][nowNode->down->w] = false;
}

int main() {
    cin >> H >> W;

    string a;
    for (int i = 0; i < H; i++) {
        cin >> a;
        for (int j = 0; j < W; j++) { 
            nodes[i][j].a = a.substr(j, 1);
            nodes[i][j].h = i;
            nodes[i][j].w = i;
            nodes[i][j].up = &nil;
            nodes[i][j].right = &nil;
            nodes[i][j].left = &nil;
            nodes[i][j].down = &nil;
            if (a[j] == 'S') {
                startNode = &nodes[i][j];
            } else if (a[j] == 'G') {
                endNode = &nodes[i][j];
            } else if ('a' <= a[j] && a[j] <= 'z') {
                if (teleMap.count(a.substr(j, 1)) == 0) {
                    teleMap[a.substr(j, 1)].first = &nodes[i][j];
                } else {
                    teleMap[a.substr(j, 1)].second = &nodes[i][j];
                }
            }
        }
    }

    vector<vector<bool>> routed(H, vector<bool>(W, false));
    routed[startNode->h][startNode->w] = true;

    routed[startNode->up->h][startNode->up->w] = true;
    calc(startNode->up, 1, routed);
    routed[startNode->up->h][startNode->up->w] = false;

    routed[startNode->left->h][startNode->left->w] = true;
    calc(startNode->left, 1, routed);
    routed[startNode->left->h][startNode->left->w] = false;

    routed[startNode->right->h][startNode->right->w] = true;
    calc(startNode->right, 1, routed);
    routed[startNode->right->h][startNode->right->w] = false;

    routed[startNode->down->h][startNode->down->w] = true;
    calc(startNode->down, 1, routed);
    routed[startNode->down->h][startNode->down->w] = false;

    if (minCnt == 0) cout << -1;
    else cout << minCnt;
}
