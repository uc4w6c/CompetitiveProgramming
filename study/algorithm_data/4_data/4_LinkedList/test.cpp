#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *next;
};

// Doubly Linked List
int main() {
    int N = 5;
    int MESSAGES[] = { 2, 1, 5, 4, 6 };

    Node* nodes = new Node[N];
    Node* firstNode;
    int size = 0;
    for (int i = 0; i < N; i++) {
        if (MESSAGES[i] != 2) {
            nodes[size] = { MESSAGES[i], 0};
            if (size > 0) {
                nodes[size].next = firstNode;
                firstNode = &nodes[size];
            }
            size++;
        }
    }
    delete[] nodes;

    for (int i = 0; i < size; i++) {
        cout << nodes[i].key << " ";
        cout << "next:" << nodes[i].next->key;
        cout << endl;
    }
}
