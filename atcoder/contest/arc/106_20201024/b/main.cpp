#include <bits/stdc++.h>
using namespace std;

// 
struct Node {
    long long point;
    Node *front;
    Node *back;
};

int main() {
    int N, M;
    cin >> N >> M;
    Node nodes[N];
    long long a[N], b[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        nodes[i].point = a[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> b[i];
    }

    int c, d;
    for (int i = 0; i < M; i++) {
        cin >> c >> d;
        c--;
        d--;
        nodes[d].front = &nodes[c];
        nodes[c].back = &nodes[d];
        /*
        if (c < d) {
            nodes[d].front = &nodes[c];
            nodes[c].back = &nodes[d];
        } else {
            nodes[c].front = &nodes[d];
            nodes[d].back = &nodes[c];
        }
        */
    }

    long long diffP = 0;
    for (int i = 0; i < N; i++) {
        if (nodes[i].point == b[i]) continue;

        diffP = b[i] - nodes[i].point;
        nodes[i].point = b[i];
        cout << "before:" << nodes[i].back->point << endl; // debug
        nodes[i].back->point -= diffP;
        cout << "after:" << nodes[i].back->point << endl; // debug
    }

    for (int i = 0; i < N; i++) {
        cout << i << ":" << nodes[i].point << " = " << b[i] << endl; // debug
        if (nodes[i].point != b[i]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}
