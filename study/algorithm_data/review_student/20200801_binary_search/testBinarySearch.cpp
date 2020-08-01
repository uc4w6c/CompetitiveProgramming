#include <bits/stdc++.h>
using namespace std;

// binary_searchの使い方
int main() {
    int A[14] = {1, 1, 2, 2, 2, 4, 5, 5, 6, 8, 8, 10, 15};
    bool isFind;

    // binary_searchは指定した値が存在するかをチェックして存在する場合trueを返す
    isFind = binary_search(A, A + 14, 3);
    cout << isFind << endl;  // false (0)

    isFind = binary_search(A, A + 14, 2);
    cout << isFind << endl;  // true (1)
}
