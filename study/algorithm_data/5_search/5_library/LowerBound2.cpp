#include <bits/stdc++.h>
using namespace std;

int A[1000000], n;

// - lower boud - 二分探索
/*
input:
5 
1 2 3 4 5
3
3 4 1
*/
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int q, k, sum = 0;
    cin >> q;
    for (int i = 0; i < q; i++) {
        scanf("%d", &k);
        if (*lower_bound(A, A + n, k) == k) sum++;
    }
    cout << sum << endl;

    return 0;
}