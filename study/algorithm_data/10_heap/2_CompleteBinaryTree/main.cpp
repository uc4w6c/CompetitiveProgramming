#include <bits/stdc++.h>
using namespace std;

int main() {
    int H;
    cin >> H;
    int heap[H];
    for (int i = 0; i < H; i++) {
        cin >> heap[i];
    }

    for (int i = 0; i < H; i++) {
        cout << "node " << i + 1 << ": ";
        cout << "key = " << heap[i] << ", ";
        if (i != 0) {
            cout << "parent key = " << heap[(int)((i + 1) / 2) - 1] << ", ";
        }
        if ((i + 1) * 2 <= H) {
            cout << "left key = " << heap[(i + 1) * 2 - 1] << ", ";
        }
        if ((i + 1) * 2 + 1 <= H) {
            cout << "left key = " << heap[(i + 1) * 2] << ", ";
        }
        cout << endl;
    }
}