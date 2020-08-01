#include <bits/stdc++.h>
using namespace std;

// lower_boundの使い方
int main() {
    int A[14] = {1, 1, 2, 2, 2, 4, 5, 5, 6, 8, 8, 10, 15};
    int *pos;
    int idx;

    // lower_boundは指定した値value以上の最初の要素の位置をイテレータで返す
    pos = lower_bound(A, A + 14, 3);
    idx = distance(A, pos);
    cout << "A[" << idx << "] = " << *pos << endl;  // A[5] = 4

    pos = lower_bound(A, A + 14, 2);
    idx = distance(A, pos);
    cout << "A[" << idx << "] = " << *pos << endl;  // A[2] = 2
}
