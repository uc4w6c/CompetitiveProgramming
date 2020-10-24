#include <bits/stdc++.h>
using namespace std;

// 
struct Node {
    long long point;
    Node *front;
    Node *back;
};

int main() {
    Node nodes[2];
    nodes[0].point = 1;
    nodes[1].point = 2;
    nodes[0].back = &nodes[1];
    cout << nodes[0].back->point;
}
