#include <bits/stdc++.h>
using namespace std;

// upper_boundの使い方
int main() {
    int A[14] = {1, 1, 2, 2, 2, 4, 5, 5, 6, 8, 8, 10, 15};
    int *pos;
    int idx;

    // upper_boundは指定した値valueより真に大きい最初の要素の位置をイテレータで返す
    pos = upper_bound(A, A + 14, 3);
    idx = distance(A, pos);
    cout << "A[" << idx << "] = " << *pos << endl;  // A[5] = 4

    pos = upper_bound(A, A + 14, 2);
    idx = distance(A, pos);
    cout << "A[" << idx << "] = " << *pos << endl;  // A[5] = 4
}
