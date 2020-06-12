#include <bits/stdc++.h>
using namespace std;

// A - The Number of Even Pairs
int main() {
    int N; // 偶数
    int M; // 奇数
    cin >> N >> M;

    cout << ((N * (N -1)) / 2) + ((M * (M - 1)) / 2);
}

// 3 4
/*
偶数
2 4
2 6
4 6

奇数
1 3
1 5
1 7
1 9
*/
