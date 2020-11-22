#include <bits/stdc++.h>
using namespace std;

struct Node {
    string a;
    Node *up;
    Node *right;
    Node *left;
    Node *down;
};
// Node *nil;

int main() {
    Node nodes[10][10];
    Node* startNode;
    Node* endNode;
    Node nil;
    /// nil = (Node *)malloc(sizeof(Node));
    nodes[0][0].a = "1";
    nodes[0][1].a = "2";

    startNode = &nodes[0][0];

    // nodes[0][0].up == nullptr;
    nodes[0][0].up = &nil;
    cout << "start" << endl;
    if (nodes[0][0].up == &nil) cout << "nil 1" << endl;
    nodes[0][0].up = &nodes[0][1];
    if (nodes[0][0].up == &nil) cout << "nil 2" << endl;

    endNode = &nodes[0][1];
    cout << startNode->a << endl;
    cout << endNode->a << endl;
    cout << startNode->up->a << endl;

}
