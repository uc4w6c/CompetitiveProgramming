#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node* prev, next;
};

// Doubly Linked List
int main() {
    int n;
    scanf("%d", &n);

    string command;
    int no;
    Node* nodes = new Node[n];
    Node* firstNode;
    int size;
    for (int i = 0; i < n; i++) {
        cin >> command;
        cin >> no;
        if (command == "insert") {
            nodes[size] = Node{ no, 0, 0 };
            if (size > 0) {
                nodes[size].next = &firstNode;
                (*firstNode).prev = &nodes[size];
            }
            firstNode = &nodes[size];
            size++;
        } else if (command == "delete") {
            (*nodes[size].next).prev = 0;
            firstNode = &nodes[size].next;
            nodes[size--] = {};

        } else if (command == "deleteFirst") {
        } else if (command == "deleteLast") {
        }
    }
    delete[] nodes;

    for (int i = 0; i < size; i++) cout << nodes[i] << " ";

}
